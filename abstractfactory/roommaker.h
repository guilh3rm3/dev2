#ifndef ROOMMAKER_H
#define ROOMMAKER_H
#include "room.h"
#include "livingroom.h"
#include "bedroom.h"

class RoomMaker
{
public:
    RoomMaker(){;}
    Room* createRoom(QString roomType)
    {
        if (roomType == "LivingRoom") { return new LivingRoom();}
        if (roomType == "BedRoom") { return new BedRoom();}
        return nullptr;
    }
};
#endif // ROOMMAKER_H
