struct vector
{
    vector(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    vector()
    {
        this->x = 0;
        this->y = 0;
    }

public:
    int x;
    int y;

    vector operator +(vector second)
    {
        return vector(this->x + second.x, this->y + second.y);
    }
    vector operator -(vector second)
    {
        return vector(this->x - second.x, this->y - second.y);
    }

    vector operator *(vector second)
    {
        return vector(this->x * second.x, this->y * second.y);
    }

    vector operator /(vector second)
    {
        if(second.x != 0 && second.y !=0)
        {
            return vector(this->x / second.x, this->y / second.y);
        }
        else
        {
            return vector(0, 0);
        }
    }
};

