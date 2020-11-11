#include "mqtt.h"

Mqtt::Mqtt(const char* server, uint16_t port)
{
    this->server = server;
    this->port = port;
}
    
    
Mqtt::Mqtt(const char* server, uint16_t port, const char* user, const char* passwd)
{
    this->server = server;
    this->port = port;
    this->user = user;
    this->passwd = passwd;
}
