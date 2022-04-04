#pragma once

#include "vector.h"


enum EntityType
{
    none,
    food,
    wall,
};

class Entity
{
public:

    Entity(EntityType type, Vector position);

    Entity(EntityType type, int x_position, int y_position);

    Entity();

    EntityType Type;

    Vector Position;
};