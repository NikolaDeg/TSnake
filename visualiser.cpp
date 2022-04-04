#include <iostream>
#include <string>
#include "headers/visualiser.h"

using namespace std;

int** Visualiser::CreateGrid(Entity *entities, int entities_count, int x_size, int y_size)
{
    int **grid = new int*[x_size];
    
    // Fill the grid with void
    for(int i = 0; i < x_size; i++)
    {
        grid[i] = new int[y_size];

        for(int j = 0; j < y_size; j++)
        {
            grid[i][j] = 0;
        }
    }

    // Set entities at the grid
    for(int i = 0; i < entities_count; i++)
    {
        Entity item = entities[i];
        switch(item.Type)
        {
            case EntityType::food:
                grid[item.Position.x][item.Position.y] = 1;
                break;
            case EntityType::wall:
                grid[item.Position.x][item.Position.y] = 2;
                break;
        }
    }

    return grid;
}

void Visualiser::Draw(int **grid, int x_size, int y_size)
{
    // Creating output image
    for(int i = 0; i < x_size; i++)
    {
        string row = "";
        for(int j = 0; j < y_size; j++)
        {
            string buffer;

            int item = grid[i][j];

            switch (item)
            {
                case 0:
                    buffer = "░░";
                    break;
                case 1:
                    buffer = "╠╣";
                    break;
                case 2:
                    buffer = "██";
                    break;
            }

            row += buffer + "";
        }
        cout << row << endl;
    }
}
