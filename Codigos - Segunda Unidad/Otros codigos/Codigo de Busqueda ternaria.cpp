#include <iostream>
using namespace std;

int main() {
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 8 ;// Elemento a buscar
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int izquierda = 0;
    int derecha = longitud - 1;
    int band = 0;
    //bool encontrado = false;

    while (izquierda <= derecha && band==0) {
        
        cout <<izquierda<< "/i" << endl;
        cout <<derecha <<"/d" << endl;
        
        int medio1 = izquierda + (derecha - izquierda) / 3; // 0 + ( 8 - 0) / 3 -- 2 ++ 3+(5-3/)/3 ++ 7()
        int medio2 = derecha - (derecha - izquierda) / 3; // 8 - (8 -0)/3 -- 6       ++ 5-(5-3)/3
        
        cout <<medio1<< "/" << endl;
        cout <<medio2<< "//" << endl;
        
        if (arreglo[medio1] == x) {
            cout << "Elemento encontrado en la posición " << medio1 << endl;
            band = 1;
        } else if (arreglo[medio2] == x) {
            cout << "Elemento encontrado en la posición " << medio2 << endl;
            band = 1;
        } else if (x < arreglo[medio1]) {
            derecha = medio1 - 1; // d= 2- 1;
        } else if (x > arreglo[medio2]) {
            izquierda = medio2 + 1; // i= 6 + 1: ++ i = 6 + 1;
        } else {
            izquierda = medio1 + 1; //i=2 + 1
            derecha = medio2 - 1;   // d=6-1
            cout<<"Ejecutado"<<endl;
        }
    }

    if (band==0) {
        cout << "Elemento no encontrado" << endl;
    }

    return 0;
}