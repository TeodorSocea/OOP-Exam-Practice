#pragma once
class Punct
{
public:
    int x, y;
    Punct(int a, int b) : x(a), y(b) {}
    Punct(const Punct &p) : x(p.x), y(p.y) {}
};
class Circle
{
public:
    Circle(const Circle &);
    Circle(int, int, int);
    bool operator==(Punct);
    bool operator>(Punct);
    operator int();
    Circle operator()(char *, int);
    int operator[](const char *);

private:
    Punct centru = {0, 0};
    int raza;
};