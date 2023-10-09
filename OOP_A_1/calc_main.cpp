#include <iostream>
#include "calc.cpp"

using namespace std;

int main(void)
{
    Calculator cal;

    cal.Init();

    cout << cal.Add(3.2, 2.4) << endl;
    cout << cal.Div(3.5, 1.7) << endl;
    cout << cal.Min(2.2, 1.5) << endl;
    cout << cal.Div(4.9, 1.2) << endl;

    cal.ShowOpCount();

    return 0;
}