#include <iostream>
using namespace std; //3

int main()
{
    int n,sp,si,itp = 0,iti= 0;
    cin>>n;
    int vecp[n], veci[n];
    for(int i=1 ; i<=n ; i++)
    {
        if((i) % 2 == 0)
        {
            vecp[itp] = i; 
            itp++;
        }
        else
        {
            veci[iti] = i;
            iti++;
        }
    }
    
    for(int i = 0; i<itp; i++)
    {
        sp = sp + vecp[i];
    }
    for(int i = 0; i<iti;i++)
    {
        si = si + veci[i];
    }
    
    cout<<sp<<" "<<si;
    
    return 0;
}