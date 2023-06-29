#ifndef ENTITY_H
#define ENTITY_H

#include <QtGui>

class Entity
{

public:
    QColor texture_color; //заглушка, потом загрузка рисунков с пиксмапами и трапами(или без них)
    virtual void update() = 0;
    Entity();
};

#endif // ENTITY_H
