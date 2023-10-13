#ifndef __POINT_RECTANGLE_H__
#define __POINT_RECTANGLE_H__

#include "point.h"

class Rectangle
{
private:
    Point upleft;
    Point downright;

public:
    Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
    void showRectangleInfo() const;
};

#endif
