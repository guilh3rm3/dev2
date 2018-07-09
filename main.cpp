#include<QDebug>
#include "builder/house.h"
#include "builder/concretehousebuildera.h"
#include "builder/housedirector.h"

#include "abstractfactory/roommaker.h"
#include "abstractfactory/room.h"
#include "abstractfactory/door.h"
#include "abstractfactory/wall.h"

#include "factorymethod/myapplication.h"
#include "factorymethod/document.h"

int main()
{
    qDebug() << "--------------- Builder ---------------";
    ConcreteHouseBuilderA myHouseBuilder;
    HouseDirector myHouseDirector;
    myHouseDirector.createHouse(myHouseBuilder);
    House myHouse = myHouseBuilder.getHouse();
    qDebug() << "My house has " + QString::number(myHouse.roomNumber()) + " rooms.";
    qDebug() << "My house has " + QString::number(myHouse.windowNumber()) + " windows.";

    qDebug() << "--------------- Abstract Factory ---------------";
    RoomMaker myMaker;
    Room* myLivingRoom = myMaker.createRoom("LivingRoom");
    Room* myBedRoom = myMaker.createRoom("BedRoom");
    qDebug() <<"myLivingRoom:  "
            << "makeDoor: "+myLivingRoom->makeDoor()->name()
            << "makeWall: "+myLivingRoom->makeWall()->name();

    qDebug() <<"myBedRoom:  "
            << "makeDoor: "+myBedRoom->makeDoor()->name()
            << "makeWall: "+myBedRoom->makeWall()->name();

    qDebug() << "--------------- Factory Method ---------------";
    Application* myAppA = new MyApplication();
    Document* docA = myAppA->newDocument("MyDocumentA");
    docA->open();
    Application* myAppB = new MyApplication();
    Document* docB = myAppB->newDocument("MyDocumentB");
    docB->open();

    return 0;
}
