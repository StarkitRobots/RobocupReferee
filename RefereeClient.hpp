#pragma once

#include <string>
#include <thread>
#include "GameState.h"

namespace RhobanReferee{

    class RefereeClient
    {
    private:
        GameState _gamedata;

    protected:
        std::thread *thread;
        int _portNo;

    public:
        RefereeClient(int portNo = 3838): _portNo(portNo){};
        virtual ~RefereeClient() {}; 

        void start();
        virtual void execute(void);

        GameState& getGameState();
    };

}
