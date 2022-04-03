#pragma once

#include "vector.h"

class Entity
{
    enum EntityType
    {
        food,
        wall,
    };

    Entity(EntityType type, Vector position);

public:

    EntityType Type;

    Vector Position;
};