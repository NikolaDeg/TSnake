#include "vector.cpp"

class Entity
{
public:

    enum EntityType
    {
        food,
        wall,
    };

    EntityType Type;

    vector Position;

    Entity(EntityType type, vector position)
    {
        this->Type = type;
        this->Position = position;
    }
};