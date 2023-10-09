#include "point.cpp"

class Circle
{
private:
    Point center;
    int radius;

public:
    void Init(int x, int y, int r)
    {
        center.Init(x, y);
        radius = r;
    };
    void ShowCircleInfo() const
    {
        cout << "Radius : " << radius << endl;
        center.ShowPointInfo();
    };
};