#include <iostream>
#include "calc.h"

using namespace std;

void Calculator::Init()
{
    count_add = 0;
    count_min = 0;
    count_mul = 0;
    count_div = 0;
};
double Calculator::Add(double a, double b)
{
    count_add++;
    return a + b;
};
double Calculator::Min(double a, double b)
{
    count_min++;
    return a - b;
};
double Calculator::Mul(double a, double b)
{
    count_mul++;
    return a * b;
};
double Calculator::Div(double a, double b)
{
    count_div++;
    return a / b;
};
void Calculator::ShowOpCount()
{
    cout << "ADD : " << count_add << endl;
    cout << "MIN : " << count_min << endl;
    cout << "MUL : " << count_mul << endl;
    cout << "DIV : " << count_div << endl;
};