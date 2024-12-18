#include <iostream>
using namespace std; //1

int main()
{
    int c;
    cin>>c;
    int vec[c];
    for(int i=0 ; i<c ; i++)
    {
        vec[i] = i + 1;
    }
    
    for(int i = 0; i<c; i++)
    {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}