#include "rectangle.h"
Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
    p1.x = x1 < x2 ? x1 : x2;
    p1.y = y1 < y2 ? y1 : y2;

    p2.x = x1 > x2 ? x1 : x2;
    p2.y = y1 < y2 ? y1 : y2;

    p3.x = x1 < x2 ? x1 : x2;
    p3.y = y1 > y2 ? y1 : y2;

    p4.x = x1 > x2 ? x1 : x2;
    p4.y = y1 > y2 ? y1 : y2;

    width = p2.x - p1.x;
    height = p3.y - p1.y;
}

Rectangle::operator bool()
{
    if (width == height)
        return true;
    else
        return false;
}

Rectangle::operator int()
{
    return (width) * (height);
}

Rectangle Rectangle::operator&(const Rectangle &rec)
{
    int x1, y1, x2, y2;
    x1 = p1.x < rec.p1.x ? p1.x : rec.p1.x;
    y1 = p1.y < rec.p1.y ? p1.y : rec.p1.y;

    x2 = p4.x > rec.p4.x ? p4.x : rec.p4.x;
    y2 = p4.y > rec.p4.y ? p4.y : rec.p4.y;

    return Rectangle(x1, y1, x2, y2);
}

punct Rectangle::GetTopLeftPoint()
{
    return p1;
}

int Rectangle::Width()
{
    return width;
}

int Rectangle::Height()
{
    return height;
}