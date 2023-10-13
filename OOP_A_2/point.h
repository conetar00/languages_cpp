#ifndef __POINT_H__
#define __POINT_H__

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

#endif