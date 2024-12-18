#include <iostream>
#include <cmath>
using namespace std; //7

int main()
{
    float d [8]={1,2,3,4,5,6,7,8};
    float v [8]={23,15,30,25,42,35,20,40};
    float m,b,y,sd,sv,sdv,sd2;
    for(int i=0;i<8;i++)
    {
        sd=sd + d[i];
        sv=sv + v[i];
        sdv = sdv + (d[i] * v[i]);
        sd2 = sd2 + (d[i] * d[i]);
    }
    m = ((sdv)-(sd*sv/8))/((sd2)-(pow(sd,2)/8));
    b = (sv/8) - (m*(sd/8));
    y = (m * 10) + b;
    cout<<y<<endl;
    y = (m*15) + b;
    cout<<y;
    return 0;
}