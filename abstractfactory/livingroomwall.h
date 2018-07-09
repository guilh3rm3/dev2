#ifndef LIVINGROOMWALL_H
#define LIVINGROOMWALL_H
#include "wall.h"
class LivingRoomWall : public Wall
{
public:
    LivingRoomWall(){m_wallName = "LivingRoomWall";}
    QString name(){return m_wallName;}
private:
    QString m_wallName;
};
#endif // LIVINGROOMWALL_H
