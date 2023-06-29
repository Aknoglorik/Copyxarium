#ifndef ATANK_H
#define ATANK_H

#include "entity.h"

class ATank : public Entity
{
    double heal_point;
public:
    void update();
    ATank();
};

#endif // ATANK_H
