#include "server.h"

int main()
{
    int PORT = 9001;
    int maxClients = 5;

    Server server(PORT, maxClients);

    server.run();
}