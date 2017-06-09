#include <iostream>
#include <server.h>

using namespace std;

int main(void)
{
    Server * server = NULL;
    int port = 3000;

    while(!server){
        server = Server::init(port);
        port++;
    }

    server->start();

    delete server;
    return 0;
}
