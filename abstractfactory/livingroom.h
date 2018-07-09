#ifndef LIVINGROOM_H
#define LIVINGROOM_H
#include "room.h"
#include "livingroomdoor.h"
#include "livingroomwall.h"
#include <QDebug>

class LivingRoom : public Room
{
public:
    LivingRoom(){qDebug() << "Initiated a LivingRoom!";}
    Door* makeDoor(){return new LivingRoomDoor();}
    Wall* makeWall(){return new LivingRoomWall();}
};
#endif // LIVINGROOM_H
