#include "headers/vector.h"

Vector::Vector(int x, int y)
{
    this->x = x;
    this->y = y;
}

Vector::Vector()
{
    this->x = 0;
    this->y = 0;
}

Vector Vector::operator +(Vector second)
{
    return Vector(this->x + second.x, this->y + second.y);
}
Vector Vector::operator -(Vector second)
{
    return Vector(this->x - second.x, this->y - second.y);
}

Vector Vector::operator *(Vector second)
{
    return Vector(this->x * second.x, this->y * second.y);
}

Vector Vector::operator /(Vector second)
{
    if(second.x != 0 && second.y !=0)
    {
        return Vector(this->x / second.x, this->y / second.y);
    }
    else
    {
        return Vector(0, 0);
    }
}
