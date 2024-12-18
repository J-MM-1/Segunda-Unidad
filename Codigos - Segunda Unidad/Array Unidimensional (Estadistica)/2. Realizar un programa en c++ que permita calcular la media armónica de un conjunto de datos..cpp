#include <iostream>
using namespace std; //2

int main()
{
    int n1,n2,d1,d2;
    int Array [4] = {1,3,5,7};
    int Array2 [4] = {1,1,1,1};
    for(int i =0;i<3;i++)
    {
        if(i == 0)
        {
            n1 = Array2 [i];
            n2 = Array2 [i+ 1];
            d1 = Array[i];
            d2 = Array[i + 1];
        }
        
        cout<<n1<<","<<n2<<","<<d1<<","<<d2<<endl;
        
        n1 = (n1 * d2) + (n2 * d1);
        d1 =  d1 * d2;
        n2 = Array2 [i];
        d2 = Array [i + 2];
    }
    
    cout<<n1<<","<<d1;

    return 0;
}