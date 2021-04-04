#pragma once
struct punct
{
    int x, y;
};
class Rectangle
{
public:
    Rectangle(int, int, int, int);
    operator bool();
    operator int();
    Rectangle operator&(const Rectangle &);
    punct GetTopLeftPoint();
    int Width();
    int Height();

private:
    punct p1, p2, p3, p4;
    int width, height;
};