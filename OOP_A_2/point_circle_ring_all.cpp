#include <iostream>

using namespace std;

// Header File Section

class Point
{
private:
    int x;
    int y;

public:
    Point(int xpos, int ypos)
        : x(xpos), y(ypos){};
    void showPointInfo();
};

class Circle
{
private:
    Point center;
    int radius;

public:
    Circle(int x, int y, int r)
        : center(x, y), radius(r){};
    void showCircleInfo();
};

class Ring
{
private:
    Circle inner;
    Circle outter;

public:
    Ring(int x1, int y1, int r1, int x2, int y2, int r2)
        : inner(x1, y1, r1), outter(x2, y2, r2){};
    void showRingInfo();
};

// Main File Section

int main(void)
{
    Ring ring(1, 1, 4, 2, 2, 9);

    ring.showRingInfo();

    return 0;
};

// Source File Section

void Point::showPointInfo()
{
    cout << "-- Point Information --" << endl;
    cout << "Point X : " << x << endl;
    cout << "Pointer Y : " << y << endl;
    cout << "---- ----" << endl;
};

void Circle::showCircleInfo()
{
    cout << "---- Circle Information ----" << endl;
    cout << "<< Circle Center >>" << endl;
    center.showPointInfo();
    cout << "Circle Radius : " << radius << endl;
    cout << "-------- --------" << endl;
};

void Ring::showRingInfo()
{
    cout << "-------- Ring Information --------" << endl;
    cout << "<<<< Ring Inner Circle >>>>" << endl;
    inner.showCircleInfo();
    cout << "<<<< Ring Outter Circle >>>>" << endl;
    outter.showCircleInfo();
    cout << "---------------- ----------------" << endl;
};