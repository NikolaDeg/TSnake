#pragma once

#include "vector.h"
#include "entity.h"

using namespace std;

class Visualiser
{
public:

    static void Draw(int** grid, int x_size, int y_size);

    static int** CreateGrid(Entity *entitys, int size, int x_size, int y_size);
};