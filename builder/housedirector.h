#ifndef HOUSEDIRECTOR_H
#define HOUSEDIRECTOR_H
#include "housebuilder.h"


class HouseDirector
{
public:
    HouseDirector(){;}
    void createHouse(HouseBuilder& concreteHouseBuilder){
        concreteHouseBuilder.buildRoom(4);
        concreteHouseBuilder.buildWindow(6);
    }
};

#endif // HOUSEDIRECTOR_H
