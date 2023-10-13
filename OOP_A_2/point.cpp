#include <iostream>
// #include "point.h"

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(const int &xpos, const int &ypos);
    int getX() const;
    int getY() const;
    bool setX(int xpos);
    bool setY(int ypos);
};

Point::Point(const int &xpos, const int &ypos)
{
    x = xpos;
    y = ypos;
};
int Point::getX() const { return x; };
int Point::getY() const { return y; };
bool Point::setX(int xpos)
{
    if (xpos < 0 || xpos > 100)
    {
        cout << "---- ERROR : Out of Range (X) ----" << endl;

        return false;
    }
    else
    {
        x = xpos;

        return true;
    }
};
bool Point::setY(int ypos)
{
    if (ypos < 0 || ypos > 100)
    {
        cout << "---- ERROR : Out of Range (Y) ----" << endl;

        return false;
    }
    else
    {
        y = ypos;

        return true;
    }
};