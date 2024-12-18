#include <iostream>
using namespace std; //9

int main()
{
    int vec1[5],vec2[5];
    
    for(int i = 0; i<5;i++)
    {
        cin>>vec1[i];
    }
    
    for(int i =0; i<5; i++)
    {
        vec2[i] = vec1[i] * 2;
    }
    
    cout<<"Vector 1: ";
    for(int i =0;i<5;i++)
    {
        cout<<vec1[i]<<" ";
    }
    
    cout<<endl<<"Vector 2: ";
    for(int i =0;i<5;i++)
    {
        cout<<vec2[i]<<" ";
    }
    return 0;
}