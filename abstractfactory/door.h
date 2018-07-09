#ifndef DOOR_H
#define DOOR_H
#include <QString>

class Door
{
public:
    Door(){;}
    virtual QString name() = 0;
};
#endif // DOOR_H
