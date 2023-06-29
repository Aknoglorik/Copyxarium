#ifndef WALL_H
#define WALL_H

#include "entity.h"

class Wall : public Entity
{
    double heal_point;
public:
    void update();
    Wall();
};

#endif // WALL_H
