#include <iostream>
#include <string>
#include "vector.cpp"

using namespace std;

class Debuger
{
    public:

    static vector* askForVectors(int& size)
    {
        size = 0;
        cout << "How many dots you want to see: ";
        cin >> size;
        cout << endl;

        vector* dots = new vector[size];

        for(int i = 0; i < size; i++)
        {
            int x = 0;
            int y = 0;

            cout << "Set x for " << i << " vector: ";
            cin >> x;
            cout << endl;

            cout << "Set x for " << i << " vector: ";
            cin >> y;
            cout << endl;

            dots[i] = vector(x, y);

            cout << "-------------------------" << endl << endl;
        }

        return dots;
    }
};