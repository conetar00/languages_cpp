#include <iostream>
// #include "point_rectangle.h"

using namespace std;

class Rectangle
{
private:
    Point upleft;
    Point downright;

public:
    Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
    void showRectangleInfo() const;
};

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
    : upleft(x1, y1), downright(x2, y2){};
// {
//     // Point upleft(x1, y1);
//     // Point downright(x2, y2);
// };
void Rectangle::showRectangleInfo() const
{
    cout << "Up Left : " << upleft.getX() << " " << upleft.getY() << endl;
    cout << "Down Right : " << downright.getX() << " " << downright.getY() << endl;
};