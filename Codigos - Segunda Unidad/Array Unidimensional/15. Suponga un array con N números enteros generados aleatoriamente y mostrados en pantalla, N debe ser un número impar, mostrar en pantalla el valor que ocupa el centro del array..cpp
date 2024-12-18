#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; //15

int main()
{
    int N = 0;
    while(N%2==0)
    {
        cout<<"Indique la cantidad de elementos del Array (Impar): ";
        cin>>N;
    }
    int Array[N];
    srand(time(NULL));
    
    cout<<"Array: ";
    for(int i =0; i<N;i++)
    {
        Array [i] = rand() % (30 - 0 + 1) + 0;
        cout<<Array[i]<<" ";
    }
    
    cout<<endl<<"El valor de la posicion central es: "<<Array[N/2];
    return 0;
}