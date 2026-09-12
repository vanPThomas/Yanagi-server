#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <mutex>
#include <unordered_map>
#include <unistd.h>        // for close()
#include <sys/socket.h>    // for socket(), bind(), listen()
#include <netinet/in.h>    // for sockaddr_in, INADDR_ANY
#include <arpa/inet.h>     // for htons()
#include <cstring>         // for memset, etc.
#include <cstdlib>
#include <sys/types.h>

class Server
{
    public:
        Server(int port);
        void run();

    private:
        int PORT;
        fd_set readfds;
        int max_socket = -1;
        int masterSocket = -1;

        int maxClients;
        std::vector<int> clientSocket;


        sockaddr_in address{};
        int addrlen = 0;

        int initializeServerSocket();
        void handleSystemCallError(std::string errorMsg);
}