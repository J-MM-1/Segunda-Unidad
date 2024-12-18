include <iostream>
using namespace std; //6

int main()
{
    int vec[10],s;
    for(int i=0 ; i<10 ; i++)
    {
        cin>>vec[i];
    }
    
    for(int i = 0; i<10; i++)
    {
        s = s + vec[i];
    }
    
    s = s / 10;
    
    cout<<"sss: "<<s;
    return 0;
}