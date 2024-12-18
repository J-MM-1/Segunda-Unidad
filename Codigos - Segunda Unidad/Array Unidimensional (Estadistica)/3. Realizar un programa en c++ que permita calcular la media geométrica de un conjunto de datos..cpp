#include <iostream>
#include <cmath>
using namespace std; //3

int main()
{
    float vec [4]={1,5,3,7};
    float mul = 1;
    for (int i =0;i<4;i++)
    {
        mul = mul * vec[i];
    }
    mul = pow(mul,0.25);
    cout<<mul;

    return 0;
}