#include <iostream>
#include <string>
#include "headers/debug.h"

using namespace std;

Vector* Debuger::askForVectors(int& size)
{
    size = 0;
    cout << "How many dots you want to see: ";
    cin >> size;
    cout << endl;

    Vector* dots = new Vector[size];

    for(int i = 0; i < size; i++)
    {
        int x = 0;
        int y = 0;

        cout << "Set x for " << i << " Vector: ";
        cin >> x;
        cout << endl;

        cout << "Set x for " << i << " Vector: ";
        cin >> y;
        cout << endl;

        dots[i] = Vector(x, y);

        cout << "-------------------------" << endl << endl;
    }

    return dots;
}
