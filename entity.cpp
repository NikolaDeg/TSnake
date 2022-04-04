#include "headers/entity.h"

Entity::Entity(EntityType type, Vector position)
{
    this->Type = type;
    this->Position = position;
}

Entity::Entity(EntityType type, int x_position, int y_position)
{
    this->Type = type;
    this->Position = Vector(x_position, y_position);
}

Entity::Entity()
{
    this->Type = none;
    this->Position = Vector(0, 0);
}
