#include "server.h"

int main()
{
    std::cout << "Yanagi booting...\n";
    int PORT = 9001;
    int maxClients = 5;

    std::cout << "Listening for connections on port" << PORT.cstr() << ".\n";

    Server server(PORT, maxClients);

    server.run();
}