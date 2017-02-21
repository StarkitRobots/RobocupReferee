/*****************************************************************************/
/*! \file    Constants.cpp
 *  \author  LH
 *  \date    2011-05-26
 *
 *  \brief   Useful informations shared by the robot
 *****************************************************************************/
#include "Constants.h"

using namespace std;

namespace RhobanReferee{

    /* Classes and messages size */
    const int Constants::nb_chars_by_robot = 4;
    const int Constants::nb_chars_by_team = 4 + Constants::nb_chars_by_robot * 11; // The referee box works with up to 11 robots

    /* Headers */
    const char * Constants::game_state_header = "RGme";

    // FIELD SIZES at IUT
    //const double Constants::lineWidth         =   5;
    //const double Constants::centerRadius      =  75;
    //const double Constants::borderStripWidth  =  28;
    //const double Constants::penaltyMarkDist   = 180;
    //const double Constants::penaltyMarkLength =  10;
    //const double Constants::goalWidth         = 225;
    //const double Constants::goalDepth         =  50;
    //const double Constants::goalAreaLength    =  60;
    //const double Constants::goalAreaWidth     = 345;
    //const double Constants::fieldLength       = 800;
    //const double Constants::fieldWidth        = 590;
    // EXPECTED FIELD SIZES
    const double Constants::lineWidth         =   5;
    const double Constants::centerRadius      =  75;
    const double Constants::borderStripWidth  =  70;//Minimum value
    const double Constants::penaltyMarkDist   = 210;
    const double Constants::penaltyMarkLength =  10;
    const double Constants::goalWidth         = 260;
    const double Constants::goalDepth         =  60;
    const double Constants::goalAreaLength    = 100;
    const double Constants::goalAreaWidth     = 500;
    const double Constants::fieldLength       = 900;
    const double Constants::fieldWidth        = 600;
}
