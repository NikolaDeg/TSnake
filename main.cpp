#include <iostream>
#include <string>
#include "headers/vector.h"
#include "headers/visualiser.h"
#include "headers/debug.h"

using namespace std;

int main()
{
    int size = 0;

    Vector *p;
    p = Debuger::askForVectors(size);

    Visualiser::draw(p, size);
    return 0;
}
