#include <iostream>
using namespace std;

int main() 
{
    int año, mes, dia;
    unsigned short pfFechas = 0; // 2 bytes = 16 bits para almacenar la fecha compactada
    
    cout << "Ingrese el dia (1-31): "; cin >> dia;
    cout << "Ingrese el mes (1-12): "; cin >> mes;
    cout << "Ingrese el año (1-99): "; cin >> año;
    
    // Para generar un Packet Format igual a DD/MM/AA
    
    pfFechas = pfFechas | (dia << 11);    // Guardar los 5 bits del día en los bits 10-15
    pfFechas = pfFechas | (mes << 7);    // Guardar los 4 bits del mes en los bits 7-10
    pfFechas = pfFechas | año;   // Guardar los 7 bits del año en los bits 0-6

    // Mostrar el resultado en hexadecimal

    cout << "Fecha en packet format: " << hex << uppercase << pfFechas << "h"<< endl;

    return 0;
}
