#include <iostream>
using namespace std;

int main() {
    int cubo[3][3][3] = {0}; 


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if ((k == 1 || i == 1 || j==1))   
                {
                    cubo[i][j][k] = 1;
                }
            }
        }
    }


    cout << "Cubo tridimensional (capas 3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Capa " << i + 1 << ":" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << cubo[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}