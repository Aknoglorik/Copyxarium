#include "tillemap.h"

TilleMap::TilleMap(int a)
{
    lvl_num = a;//Ну тут типо мы получили номер файла и открываем соотв. файл и там загружаем и всё такое но пока нет
    for(int i = 0;i<V_SIZE;i++)
        for(int j = 0; j<H_SIZE;j++)
        {
            if((i == 3)||(i==5))
                lvl_matrix[i][j] = (Wall*)new Wall();
            else
            {
                if((i==4)&&(j == 0))
                    lvl_matrix[i][j] =(ATank*) new ATank();
                else
                    lvl_matrix[i][j] = (Road*) new Road();
            }
        }
}

void TilleMap::update()//изменяем состояние карты при событии
{
    lvl_num++;//изображает активную деятельность, далее пилить обработку нажатий на клавиши и прочего прочего прочего (может даже класс для событий)
}

QColor TilleMap::get_texture(int i, int j)
{
    return(lvl_matrix[i][j]->texture_color);
}

