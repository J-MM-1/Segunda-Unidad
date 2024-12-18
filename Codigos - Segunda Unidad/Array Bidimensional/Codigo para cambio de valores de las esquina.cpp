#include <iostream>
using namespace std;  //Matriz bidimensional - Cambiar valores de las esquinas

int main()
{
    int a =0,n =3;
    int matriz[3][3] = {2,3,4,5,6,7,8,9,1};
    int temp, temp2;
    
    matriz [0][0] = 2;
    matriz [0][1] = 3;
    matriz [0][2] = 4;
    matriz [1][0] = 5;
    matriz [1][1] = 6;
    matriz [1][2] = 7;
    matriz [2][0] = 8;
    matriz [2][1] = 9;
    matriz [2][2] = 1;
    
    temp = matriz[0][0];
    matriz [0][0] = matriz [n- 1][n- 1];
    matriz [n - 1][n - 1] = temp;
    
    temp2 = matriz[0][n - 1];
    matriz [0][n- 1] = matriz [n - 1][0];
    matriz [n - 1][0] = temp2;
    
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}