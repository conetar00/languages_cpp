#include <iostream>
#include <cstring>
#include "printer.h"

using namespace std;

void Printer::SetString(const char *ptr)
{
    strcpy(string, ptr);
};
void Printer::ShowString()
{
    cout << string << endl;
};