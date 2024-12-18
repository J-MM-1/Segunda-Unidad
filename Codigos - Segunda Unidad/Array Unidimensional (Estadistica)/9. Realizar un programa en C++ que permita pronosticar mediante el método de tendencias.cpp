#include <iostream>
#include <cmath>
using namespace std; //9

int main()
{
    float x[5] = { 1,2,3,4,5 };
    float y[5] = { 12860,12900,13250,13850,14520};
    float exp,tcp,ten;
    exp = 1 / (x[4] - 1);
    tcp = (pow((y[4] / y[0]), exp)) - 1;
    ten = y[4] * (1 + tcp);
    cout << ten;
    return 0;
}