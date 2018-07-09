#ifndef LIVINGROOMDOOR_H
#define LIVINGROOMDOOR_H
#include "door.h"

class LivingRoomDoor : public Door
{
public:
    LivingRoomDoor(){m_doorName = "LivingRoomDoor";}
    QString name(){return m_doorName;}

private:
    QString m_doorName;
};
#endif // LIVINGROOMDOOR_H
