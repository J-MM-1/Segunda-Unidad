#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; //11

int main()
{
    srand(time(NULL));
    int N,sum;
    cin>>N;
    int Array[N];
    for(int i =0; i<N;i++)
    {
        Array [i] = rand() % (30 - 0 + 1) + 0;
        cout<<Array[i]<<" ";
        sum = sum + Array[i];
    }
    
    cout<<endl<<"La suma es: "<<sum;
    
    return 0;
}