#ifndef TILLEMAP_H
#define TILLEMAP_H

#define V_SIZE 30   //число строк
#define H_SIZE 45   //число столбцов

#include "entity.h"
#include "wall.h"
#include "atank.h"
#include "road.h"

class TilleMap
{
    int lvl_num;
    Entity* lvl_matrix[V_SIZE][H_SIZE];   //пока статическая заглущка, потом запилю в динамке
public:
    QColor get_texture(int, int);
    void load_map();    //грузим карту из файла
    void update();    //обрабатываем событие
    TilleMap(int lvl_num);
};

#endif // TILLEMAP_H
