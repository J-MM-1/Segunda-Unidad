#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; //14

int main()
{
    int N,escalar;
    cin>>N;
    cin>>escalar;
    int Array[N];
    srand(time(NULL));
    
    cout<<"Array Actual: ";
    for(int i =0; i<N;i++)
    {
        Array [i] = rand() % (30 - 0 + 1) + 0;
        cout<<Array[i]<<" ";
        Array [i] = Array [i] * escalar;
    }
    
    cout<<endl<<"Nuevo Array: ";
    for(int i =0; i<N;i++)
    {
        cout<<Array[i]<<" ";
    }
    
    return 0;
}