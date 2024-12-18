#include <iostream>
using namespace std;
int main()
{
    char letra;
    cout<<"Ingrese una letra: ";cin>>letra;
    if((letra&32)==32) // Verificamos si la letra es M o m
    {
        letra = letra & 223; // 223 = 1101 1111
    }
    else
    {
        letra = letra | 32; // 32 = 0010 0000
    }
    cout<<"La letra convertida es: "<<letra ; 
    return 0;
}
