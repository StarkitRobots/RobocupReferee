/*
 * RefereeClient.cpp
 *
 *  Created on: 5 juil. 2011
 *      Author: hugo
 */

#include <sys/types.h>

#ifdef WIN32
#include <Winsock2.h>
#else
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include "RefereeClient.hpp"

#define ERROR(msg) do{perror(#msg); exit(0);}while(0);

namespace RhobanReferee{

    void RefereeClient::start()
    {
        thread = new std::thread(&RefereeClient::execute, this);
    }

    void RefereeClient::execute(void){
#ifndef WIN32
        std::cout << "Referee Client started" << std::endl;

        int sock, n, optval;
        unsigned int length;
        struct sockaddr_in from, client_address;
        char buffer[256];

        optval = 1;


        /* Client socket initialization */
        sock = socket(AF_INET, SOCK_DGRAM, 0);
        if (sock < 0) ERROR("socket");
#ifndef WIN32
        n = setsockopt(sock,SOL_SOCKET,SO_REUSEADDR,&optval,sizeof(int));
        if (n < 0) ERROR("setSockOpt");
#else
        //n = setsockopt(sock,SOL_SOCKET,SO_REUSEADDR,NULL,sizeof(int));
#endif

        /* Configuring Client */
        client_address.sin_family = AF_INET;
        client_address.sin_addr.s_addr = INADDR_ANY;
        client_address.sin_port = htons(_portNo);
        n = bind(sock, (struct sockaddr *)&client_address,
                sizeof(struct sockaddr_in));
        if(n < 0) {ERROR("binding")};

        length = sizeof(struct sockaddr_in);
        /* Treatment of received messages */
        while (1){
#ifdef WIN32
            int l = length;
            n = recvfrom(sock, buffer, 256, 0, (struct sockaddr *)&from, &l);
#else
            n = recvfrom(sock, buffer, 256, 0, (struct sockaddr *)&from, &length);
#endif
            if (n < 0) ERROR("recvfrom");
            buffer[n] = '\0';
            _gamedata.update_from_message(buffer);
        }
#ifndef WIN32
        close(sock);
#else
        closesocket(sock);
#endif
#endif
    }

    GameState & RefereeClient::getGameState(){
        return _gamedata;
    }

}
