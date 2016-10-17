/*****************************************************************************/
/*! \file    Robot.h
 *  \author  LH
 *  \date    2011-05-26
 *
 *  \brief   Robot informations sent by the referee box
 *	This class is used to store the robot informations
 *****************************************************************************/
#ifndef ROBOT_H
#define ROBOT_H

#include "Constants.h"
#include "utilities.h"
#include <iostream>

namespace RhobanReferee{

class Robot{
public:
  Robot();
  ~Robot();

  int getPenalty() const;
  int getSecsTillUnpenalised() const;
  
  /*! \brief Update the robot from a referee box message */
  void update_from_message(char const* message, int numTeam, int numRobot);

private:
  int m_penalty;
  int m_secs_till_unpenalised;
  
};

std::ostream& operator<<(std::ostream& flux, Robot const& myRobot);

}

#endif // ROBOT_H

/*****************************************************************************/
/*****************************************************************************/
