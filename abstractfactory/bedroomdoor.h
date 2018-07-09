#ifndef BEDROOMDOOR_H
#define BEDROOMDOOR_H
#include "door.h"

class BedRoomDoor : public Door
{
public:
    BedRoomDoor(){m_doorName = "BedRoomDoor";}
    QString name(){return m_doorName;}

private:
    QString m_doorName;
};
#endif // BEDROOMDOOR_H
