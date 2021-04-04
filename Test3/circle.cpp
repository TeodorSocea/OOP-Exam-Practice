#include "circle.h"
#include <cmath>
#include <string.h>
Circle::Circle(int x, int y, int r)
{
    centru = {x, y};
    raza = r;
}
Circle::Circle(const Circle &c)
{
    centru = c.centru;
    raza = c.raza;
}
bool Circle::operator==(Punct p)
{
    if (sqrt((centru.x - p.x) * (centru.x - p.x) + (centru.y - p.y) * (centru.y - p.y)) == raza)
        return true;
    else
        return false;
}
bool Circle::operator>(Punct p)
{
    if (sqrt((centru.x - p.x) * (centru.x - p.x) + (centru.y - p.y) * (centru.y - p.y)) < raza)
        return true;
    else
        return false;
}
Circle::operator int()
{
    return raza * 2;
}
Circle Circle::operator()(char *type, int val)
{
    if (strcmp("add_to_x", type) == 0)
        centru.x += val;
    if (strcmp("add_to_y", type) == 0)
        centru.y += val;
    if (strcmp("add_to_ray", type) == 0)
        raza += val;
    return *this;
}
int Circle::operator[](const char *req)
{
    if (strcmp("x", req) == 0)
        return centru.x;

    if (strcmp("y", req) == 0)
        return centru.y;

    if (strcmp("ray", req) == 0)
        return raza;
}
