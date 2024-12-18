#include <iostream>
using namespace std;

int main()
{
    int16_t numero;  // Para declarar un numero de 16 bits
    int cont = 0;
    cout<<"Ingrese un numero: "; cin>>numero;
    
    for(int i=0; i<16;i++)
    {
        if(((numero<<i) & 0x8000) == 0x8000) // 0x8000 esta en h = 1000 000 0000 0000 en binario
        {
            cont++;
        }
    }
    
    cout<<"Los unos en el numero son: " << cont;
    return 0;
}
