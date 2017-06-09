/**
  * @file
  * @brief Server implementation
  */
#ifndef SERVER_H
#define SERVER_H

#include <progbase-cpp/net.h>
#include <handlers.h>

using namespace progbase::net;

/**
 * @brief The Server class
 */
class Server
{
    TcpListener *_listener;
    IpAddress *_address;
    bool _isActive = false;
    vector<CommandHandler> _handlers;

    Server(TcpListener *listener, IpAddress *address);
    void send(NetMessage message);
public:
    ~Server();

    static Server * init(int serverPort);
    void start();
    void stop();
};

#endif // SERVER_H
