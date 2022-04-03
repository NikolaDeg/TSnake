#pragma once

struct Vector
{
    Vector(int x, int y);

    Vector();

public:

    int x;
    int y;

    Vector operator +(Vector second);

    Vector operator -(Vector second);

    Vector operator *(Vector second);

    Vector operator /(Vector second);
};

