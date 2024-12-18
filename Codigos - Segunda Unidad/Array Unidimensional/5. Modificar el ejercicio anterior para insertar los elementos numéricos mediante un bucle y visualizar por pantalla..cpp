#include <iostream>
using namespace std; //5

int main()
{
    int vec[5];
    for(int i=0 ; i<5 ; i++)
    {
        cin>>vec[i];
    }
    
    cout<<"Mostrar elementos:"<<endl;
    for(int i = 0; i<5; i++)
    {
        cout<<vec[i]<<endl;
    }
    
    
    return 0;
}