#ifndef BEDROOMWALL_H
#define BEDROOMWALL_H
#include "wall.h"

class BedRoomWall : public Wall
{
public:
    BedRoomWall(){m_wallName = "BedRoomWall";}
    QString name(){return m_wallName;}
private:
    QString m_wallName;
};
#endif // BEDROOMWALL_H
