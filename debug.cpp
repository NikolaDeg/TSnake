#include <iostream>
#include <string>
#include "headers/debug.h"

using namespace std;

Entity* Debuger::AskForEntities(int& size)
{
    size = 0;
    cout << "How many entities you want to see: ";
    cin >> size;
    cout << endl;

    Entity* dots = new Entity[size];

    for(int i = 0; i < size; i++)
    {
        int x = 0;
        int y = 0;
        int type = 0;
        EntityType e_type = none;

        cout << "Set x position for the " << i << " entity: ";
        cin >> x;
        cout << endl;

        cout << "Set y position for the " << i << " entity: ";
        cin >> y;
        cout << endl;

        cout << "Set entity type:\nFood - 1\nWall - 2\n>> ";
        cin >> type;
        cout << endl;

        switch (type)
        {
            case 1:
                e_type = food;
                break;

            case 2:
                e_type = wall;
                break;
        
        default:
            break;
        }

        dots[i] = Entity(e_type, x, y);

        cout << "-------------------------" << endl << endl;
    }

    return dots;
}
