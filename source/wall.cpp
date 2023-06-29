#include "wall.h"

Wall::Wall()
{
    texture_color = Qt::darkBlue;
    heal_point = 100;
}

void Wall::update()
{
    if(heal_point <=0)
        texture_color = Qt::gray;
}
