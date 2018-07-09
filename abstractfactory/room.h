#ifndef ROOM_H
#define ROOM_H
#include "wall.h"
#include "door.h"

class Room
{
public:
    Room(){;}
    virtual Wall* makeWall() = 0;
    virtual Door* makeDoor() = 0;
};
#endif // ROOM_H
