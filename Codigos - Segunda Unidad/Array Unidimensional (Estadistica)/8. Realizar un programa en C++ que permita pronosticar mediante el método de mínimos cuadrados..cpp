#include <iostream>
#include <cmath>
using namespace std; //8

int main()
{
    float x[5] = { 1,2,3,4,5 };
    float y[5] = { 1024,1105,1140,1200,1188};
    float X, Y, a, b, sxy=0, sx=0, sy=0, sx2=0;
    for (int i = 0; i < 5; i++)
    {
        sx = sx + x[i];
        sy = sy + y[i];
        sxy = sxy + (x[i] * y[i]);
        sx2 = sx2 + (x[i] * x[i]);
    }
    b = ((5 * sxy) - (sx * sy)) / ((5 * sx2) - (pow(sx, 2)));
    a = ((sy)-(b * sx)) / (5);
    Y = a + (b * 6);
    cout << Y<<endl;
    Y = a + (b * 7);
    cout << Y;
    return 0;
}