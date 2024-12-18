#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; //13

int main()
{
    int N,sum;
    cin>>N;
    int Array1 [N], Array2[N],ArraySum[N];
    srand(time(NULL));
    
    for(int i =0; i<N;i++)
    {
        Array1 [i] = rand() % (30 - 0 + 1) + 0;
        Array2 [i] = rand() % (30 - 0 + 1) + 0;
        ArraySum [i] = Array1[i] + Array2[i];
        sum = sum + ArraySum[i];
    }
    
    cout<<"Array 1: ";
    for(int i =0; i<N;i++)
    {
        cout<<Array1[i]<<" ";
    }
    
    cout<<endl<<"Array 2: ";
    for(int i =0; i<N;i++)
    {
        cout<<Array2[i]<<" ";
    }
    
    cout<<endl<<"Array Suma: ";
    for(int i =0; i<N;i++)
    {
        cout<<ArraySum[i]<<" ";
    }
    cout<<endl<<"La suma es: "<<sum;
    
    return 0;
}