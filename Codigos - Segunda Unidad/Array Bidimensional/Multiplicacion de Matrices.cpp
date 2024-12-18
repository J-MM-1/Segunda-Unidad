#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;

    cout << "Ingrese el número de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el número de columnas de la primera matriz: ";
    cin >> columnas1;

    cout << "Ingrese el número de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el número de columnas de la segunda matriz: ";
    cin >> columnas2;

    if (columnas1 != filas2) {
        cout << "La multiplicación no es posible. El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz." << endl;
        return 1;
    }

    int matriz1[10][10], matriz2[10][10], resultado[10][10] = {0};

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0; // Inicializar el elemento
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }


    cout << "El resultado de la multiplicación es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << resultado[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}