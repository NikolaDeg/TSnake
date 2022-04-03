#include <iostream>
#include <string>
#include "vector.cpp"
#include "visualiser.cpp"
#include "debug.cpp"

using namespace std;

int main()
{
    int size = 0;

    vector *p;
    p = Debuger::askForVectors(size);

    Visualiser::draw(p, size);
    return 0;
}