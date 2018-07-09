#ifndef HOUSEBUILDER_H
#define HOUSEBUILDER_H
#include "house.h"

class HouseBuilder
{
public:
    HouseBuilder(){;}
    virtual void buildRoom(int roomNo) = 0;
    virtual void buildWindow(int windowNo) = 0;
    virtual House getHouse() = 0;
};

#endif // HOUSEBUILDER_H
