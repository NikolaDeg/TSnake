#include <iostream>
#include <string>
#include "headers/vector.h"
#include "headers/visualiser.h"
#include "headers/debug.h"

using namespace std;

int main()
{
    int size = 0;

    Entity *entities;
    entities = Debuger::AskForEntities(size);

    int** grid;

    grid = Visualiser::CreateGrid(entities, size, 25, 25);

    Visualiser::Draw(grid, 25, 25);
    return 0;
}
