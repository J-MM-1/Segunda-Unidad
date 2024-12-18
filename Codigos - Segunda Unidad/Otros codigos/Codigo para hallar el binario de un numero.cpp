#include <iostream>
using namespace std;

int main()
{   
    int16_t caracter = -16;
    int binario[16] = {};
    
    for(int i=0;i<16;i++)
    {
        binario[i] = ((caracter<<i)&128)/128;
    }
    
    cout<<"Valor:";
    for(int i=0;i<16;i++) cout<<binario[i];

    return 0;
}