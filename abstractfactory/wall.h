#ifndef WALL_H
#define WALL_H
#include <QString>

class Wall
{
public:
    Wall(){;}
    virtual QString name() = 0;
};

#endif // WALL_H
