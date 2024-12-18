#include <iostream>
#include <cmath>
using namespace std; //5

int main()
{
    float vec [6]={3,5,6,4,2,7},s=0,n,s1=0;
    
    for(int i =0;i<6;i++)
    {
        s+=vec[i];
    }
    
    s = s / 6;
    
    for(int i =0;i<6;i++)
    {
        n = pow((vec[i] - s),2);
        s1 = s1 + n;
    }
    //cout<<s1<<",,";
    s1 = s1 / 6;
    cout<<"Varianza: "<<s1<<endl;
    s1 = sqrt(s1);
    cout<<"Desviacion estandar: "<<s1;
    return 0;
}