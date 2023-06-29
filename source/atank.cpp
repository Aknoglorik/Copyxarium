#include "atank.h"

ATank::ATank()
{
    heal_point = 25;
    texture_color = Qt::green;
}

void ATank::update()
{
    if(heal_point <=0)
        texture_color = Qt::darkRed;
    //тут пилить обработку событий, может даже класс для событий тунка(?)
}
