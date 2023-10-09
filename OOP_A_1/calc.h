class Calculator
{
private:
    int count_add;
    int count_min;
    int count_mul;
    int count_div;

public:
    void Init();
    double Add(double a, double b);
    double Min(double a, double b);
    double Mul(double a, double b);
    double Div(double a, double b);
    void ShowOpCount();
};