#include <iostream>
#include <cmath>
using namespace std; //4

int main()
{
    float vec [5]={10,7,8,10,6},s=0,n,s1=0;
    
    for(int i =0;i<5;i++)
    {
        s+=vec[i];
    }
    
    s = s / 5;
    
    for(int i =0;i<5;i++)
    {
        n = vec[i] - s;
        if(n<0)
        {
            n = n * (- 1);
        }
        s1 = s1 + n;
    }
    s1 = s1 / 5;
    cout<<s1;
    return 0;
}