#include "point_circle.cpp"

class Ring
{
private:
    Circle inner;
    Circle outter;

public:
    void Init(int i1, int i2, int i_r, int o1, int o2, int o_r)
    {
        inner.Init(i1, i2, i_r);
        outter.Init(o1, o2, o_r);
    };
    void ShowRingInfo() const
    {
        cout << "---- Inner Circle ----" << endl;
        inner.ShowCircleInfo();

        cout << "---- Outter Circle ----" << endl;
        outter.ShowCircleInfo();
    };
};