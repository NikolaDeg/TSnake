#include <iostream>
#include <string>
#include "vector.cpp"

using namespace std;

const int CONFX = 25;
const int CONFY = 25;

class Visualiser
{
    public:

    static void draw(vector *points, int size)
    {
        int image[CONFX][CONFY];
        
        for(int i = 0; i < CONFX; i++)
        {
            for(int j = 0; j < CONFY; j++)
            {
                image[i][j] = 0;
            }
        }

        for(int i = 0; i < size; i++)
        {
            image[points[i].x][points[i].y] = 1;
        }

        for(int i = 0; i < CONFX; i++)
        {
            string row = "";
            for(int j = 0; j < CONFY; j++)
            {
                string buffer;

                if(image[i][j] == 1)
                {
                    buffer = "██";
                }
                else
                {
                    buffer = "░░";
                }

                row = row + buffer + "";
            }
            cout << row << endl;
        }
    }
};