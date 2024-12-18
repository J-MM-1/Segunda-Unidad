#include <iostream>
using namespace std; //7

int main()
{
    int vec[4] ={1,5,6,4},b;
    cin>>b;
    for(int i=0 ; i<4 ; i++)
    {
        if(vec[i] == b )
        {
            cout<<"Esta en la pos: "<<i;
        }
    }
    
    
    return 0;
}