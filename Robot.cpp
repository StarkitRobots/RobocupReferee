/*****************************************************************************/
/*! \file    Robot.cpp
 *  \author  LH
 *  \date    2011-05-26
 *
 *  \brief   Robot informations sent by the referee box
 *****************************************************************************/
 #include "Robot.h"

using namespace std;

namespace RhobanReferee{

Robot::Robot(){
	m_penalty = 0;
	m_secs_till_unpenalised = 0;
}

Robot::~Robot(){
}

int Robot::getPenalty() const{
  return m_penalty;
}

int Robot::getSecsTillUnpenalised() const{
  return m_secs_till_unpenalised;
}

/* Use a broadcasted message to update the Robot */
void Robot::update_from_message(char const* message, int numRobot){
	int d = Constants::nb_chars_by_robot * numRobot;//decalage
	m_penalty = chars_to_int(message, d+0, d+1);
	m_secs_till_unpenalised = chars_to_int(message, d+1, d+2);
}

ostream& operator<<(ostream&flux, Robot const& r){
	flux << "\t\tpenalty : " << r.getPenalty() << endl;
	flux << "\t\tsecs_till_unpenalised : " << r.getSecsTillUnpenalised() << endl;
	return flux;
}

}

/*****************************************************************************/
/*****************************************************************************/
