#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l1;
    int l2;

public:
    Rectangle(int in_l1, int in_l2)
        : l1(in_l1), l2(in_l2){};
    void ShowAreaInfo()
    {
        cout << "AREA : " << l1 * l2 << endl;
    };
};

class Square : public Rectangle
{
public:
    Square(int l)
        : Rectangle(l, l){};
};

int main(void)
{
    Rectangle rec(4, 2);
    rec.ShowAreaInfo();

    Square sqr(8);
    sqr.ShowAreaInfo();

    return 0;
}