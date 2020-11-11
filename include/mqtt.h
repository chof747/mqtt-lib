#ifndef MQTT_H
#define MQTT_H

#include <Arduino.h>

class Mqtt
{
    public:

    Mqtt(const char* server, uint16_t port);
    Mqtt(const char* server, uint16_t port, const char* user, const char* passwd);

    private:

    const char* server;
    uint16_t port;
    const char* user;
    const char* passwd;
};


#endif //MQTT_H