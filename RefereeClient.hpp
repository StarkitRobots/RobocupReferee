#pragma once

#include <string>
#include <thread>
#include "GameState.h"
#include <sockets/UDPBroadcast.hpp>

namespace RhobanReferee{

    class RefereeClient
    {
    private:
        GameState _gamedata;

    protected:
        std::thread *thread;
        int _portNo, _portSend;

    public:
        static const int protocolVersion = 12;
        static const int protocolReturnVersion = 2;

        RefereeClient(int portNo = 3838, int portSend = 3939): _portNo(portNo), _portSend(portSend) {};
        virtual ~RefereeClient() {}; 

        void start();
        virtual void execute(void);
        void setState(uint8_t teamId, uint8_t myId, uint8_t message);
        uint8_t _myTeamId;
        uint8_t _myId;
        uint8_t _message;

        GameState& getGameState();
    };

}
