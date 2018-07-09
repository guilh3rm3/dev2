#ifndef CONCRETEHOUSEBUILDERA_H
#define CONCRETEHOUSEBUILDERA_H
#include "house.h"
#include "housebuilder.h"

class ConcreteHouseBuilderA : public HouseBuilder
{
public:
    ConcreteHouseBuilderA(){;}
    void buildRoom(int roomNo){m_house.setRoomNumber(roomNo);}
    void buildWindow(int windowNo){m_house.setWindowNumber(windowNo);}
    House getHouse(){return m_house;}


private:
    House m_house;
};

#endif // CONCRETEHOUSEBUILDERA_H
