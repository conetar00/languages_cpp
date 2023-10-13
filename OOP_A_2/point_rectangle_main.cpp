// Compile Error : "Undefined Reference to"

#include <iostream>
#include "point.cpp"
#include "point_rectangle.cpp"

using namespace std;

int main(void)
{
    Rectangle rectangle(10, 10, 20, 20);

    rectangle.showRectangleInfo();

    return 0;
}