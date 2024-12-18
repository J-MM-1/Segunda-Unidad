#include <iostream>
#include <cmath>
using namespace std; //10

int main()
{
    float vn[5] = { 12860,12900,13250,13850,14520 };
    float in[5], sVar=0, pVar, pron;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            in[i] = 0;
        }
        else
        {
            in[i] = (vn[i] - vn[i - 1]) / vn[i - 1];
        }
        sVar = sVar + in[i];
    }
    pVar = sVar / (5 - 1);
    pron = vn[4] * (1 + pVar);
    cout << pron;
    return 0;
}