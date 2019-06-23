/*
 * RefereeClient.cpp
 *
 *  Created on: 5 juil. 2011
 *      Author: hugo
 */
#include "robocup_referee/referee_client.h"

#include <unistd.h>
#include <sys/types.h>

#include <stdio.h>
#include <stdlib.h>

#include "robocup_referee/time_stamp.h"

namespace robocup_referee
{
void RefereeClient::start()
{
  _myTeamId = 0;
  _myId = 0;
  thread = new std::thread(&RefereeClient::execute, this);
}

void RefereeClient::execute(void)
{
  starkit_utils::UDPBroadcast broadcast(_portNo, _portSend);
  std::cout << "Referee Client started" << std::endl;

  char buffer[1024];
  TimeStamp last;

  while (1)
  {
    usleep(1000);
    size_t n = 1024;
    if (broadcast.checkMessage((unsigned char*)buffer, n))
    {
      buffer[n] = '\0';
      _gamedata.update_from_message(buffer);
    }

    // Answering referee at 1hz
    if (_myId != 0 && last.elapsed_time() > 100)
    {
      last = TimeStamp();
      uint8_t returnData[8];
      returnData[0] = 'R';
      returnData[1] = 'G';
      returnData[2] = 'r';
      returnData[3] = 't';
      returnData[4] = protocolReturnVersion;
      returnData[5] = _myTeamId;
      returnData[6] = _myId;
      returnData[7] = _message;

      broadcast.broadcastMessage(returnData, 8);
    }
  }
}

void RefereeClient::setState(uint8_t teamId, uint8_t myId, uint8_t message)
{
  _myTeamId = teamId;
  _myId = myId;
  _message = message = message;
}

GameState& RefereeClient::getGameState()
{
  return _gamedata;
}

}  // namespace robocup_referee
