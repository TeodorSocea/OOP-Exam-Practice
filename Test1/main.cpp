#include "rectangle.h"
#include <iostream>
using std::boolalpha;
using std::cout;
using std::endl;
int main()
{
    // Rectangle r; // acest cod nu va compila
    Rectangle r1 = {10, 10, 20, 20};
    Rectangle r2 = {15, 50, 25, 15};
    /*
    cout << "R1 = ";
    for(auto p: r1)
        cout << "Punct(" << p.x << "," << p.y << ") ";
    cout << endl;
    for(auto p: r2)
        cout << "Punct(" << p.x << "," << p.y << ") ";
    cout << endl;
     */
    cout << "R1 e patrat: " << boolalpha << (bool)r1 << endl;
    cout << "R2 e patrat: " << boolalpha << (bool)r2 << endl;
    cout << "Suprafata lui r1 = " << (int)r1 << endl;
    cout << "Suprafata lui r2 = " << (int)r2 << endl;

    Rectangle r3 = r1 & r2;

    cout << "Dreptunghiul minim care include r1 si r2 este";
    cout << " x = " << r3.GetTopLeftPoint().x;
    cout << " y = " << r3.GetTopLeftPoint().y;
    cout << " lungime = " << r3.Width();
    cout << " latime = " << r3.Height() << endl;
}