#include <iostream>
using namespace std; //2

int main()
{
    int n,s;
    cin>>n;
    int vec[n];
    for(int i=0 ; i<n ; i++)
    {
        vec[i] = i + 1;
    }
    
    for(int i = 0; i<n; i++)
    {
        s = s + vec[i];
    }
    
    cout<<s;
    
    return 0;
}