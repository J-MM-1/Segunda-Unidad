#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t seg = time(NULL);
    long t = seg;
    int h = t / 3600;
    cout << h << endl;
    int a = h / 24;
    h = h % 24;
    h = h - 5;
    t = t % 3600;
    int mes = a % 365;
    a = a / 365;
    cout << a << endl;
    cout << mes << endl;
    int m, s;
    if(t < 60)
    {
        m = 0;
        s = t;
    }
    else
    {
        m = t / 60;
        t = t % 60;
        s = t;
    }
    
    cout << "H:" <<h<<" M: " <<m <<" S: "<<s<< endl;
}