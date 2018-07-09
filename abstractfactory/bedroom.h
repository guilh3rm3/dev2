#ifndef BEDROOM_H
#define BEDROOM_H
#include "room.h"
#include "bedroomdoor.h"
#include "bedroomwall.h"
#include <QDebug>

class BedRoom : public Room
{
public:
    BedRoom(){qDebug() << "Initiated a BedRoom!";}
    Door* makeDoor(){return new BedRoomDoor();}
    Wall* makeWall(){return new BedRoomWall();}
};
#endif // BEDROOM_H
