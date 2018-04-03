/*****************************************************************************/
/*! \file    Constants.cpp
 *  \author  LH
 *  \date    2011-05-26
 *
 *  \brief   Useful informations shared by the robot
 *****************************************************************************/
#include "robocup_referee/constants.h"

using namespace std;

namespace robocup_referee{

    /* Classes and messages size */
    const int Constants::nb_chars_by_robot = 4;
    const int Constants::nb_chars_by_team = 260 + Constants::nb_chars_by_robot * 12; 
    // The referee box works with up to 11 robots, plus the coach

    /* Headers */
    const char * Constants::game_state_header = "RGme";

    // FIELD SIZES at EirLab
    // const double Constants::lineWidth         =   5;
    // const double Constants::centerRadius      =  75;
    // const double Constants::borderStripWidth  =  28;
    // const double Constants::penaltyMarkDist   = 210;
    // const double Constants::penaltyMarkLength =  10;
    // const double Constants::goalWidth         = 260;
    // const double Constants::goalDepth         =  50;
    // const double Constants::goalAreaLength    = 100;
    // const double Constants::goalAreaWidth     = 500;
    // const double Constants::fieldLength       = 810;
    // const double Constants::fieldWidth        = 600;
    // FIELD SIZES at Nagoya
    // const double Constants::lineWidth         =   5;
    // const double Constants::centerRadius      =  75;
    // const double Constants::borderStripWidth  =  70;//Minimum value
    // const double Constants::penaltyMarkDist   = 210;
    // const double Constants::penaltyMarkLength =  10;
    // const double Constants::goalWidth         = 260;
    // const double Constants::goalDepth         =  60;
    // const double Constants::goalAreaLength    = 100;
    // const double Constants::goalAreaWidth     = 500;
    // const double Constants::fieldLength       = 900;
    // const double Constants::fieldWidth        = 600;

    // FIELD SIZES at Nagoya
    const double Constants::lineWidth         =   6;
    const double Constants::centerRadius      =  78;
    const double Constants::borderStripWidth  =  65;//Minimum value
    const double Constants::penaltyMarkDist   = 209;
    const double Constants::penaltyMarkLength =  15;
    const double Constants::goalWidth         = 256;
    const double Constants::goalDepth         =  61;
    const double Constants::goalAreaLength    = 100;
    const double Constants::goalAreaWidth     = 487;
    const double Constants::fieldLength       = 900;
    const double Constants::fieldWidth        = 600;

    // EXPECTED FIELD SIZES
    // const double Constants::lineWidth         =   5;
    // const double Constants::centerRadius      =  75;
    // const double Constants::borderStripWidth  =  70;//Minimum value
    // const double Constants::penaltyMarkDist   = 210;
    // const double Constants::penaltyMarkLength =  10;
    // const double Constants::goalWidth         = 260;
    // const double Constants::goalDepth         =  60;
    // const double Constants::goalAreaLength    = 100;
    // const double Constants::goalAreaWidth     = 500;
    // const double Constants::fieldLength       = 900;
    // const double Constants::fieldWidth        = 600;
}
