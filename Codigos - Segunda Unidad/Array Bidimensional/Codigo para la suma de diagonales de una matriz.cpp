#include <iostream>
using namespace std; // Suma de las diagonales de una matriz 

int main()
{
    int a =0,n =5, nm =0;
    
    int matriz[100][100];
    
    int temp, temp2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matriz [i][j]=nm;
            nm ++;
            if(j==n-1)
            {
                nm=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<i<<" "<<j<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int sum;
    int cont = n - 1;
    for(int i=0;i<n;i++)
    {
        sum = sum + matriz[i][i] + matriz[i][cont];
        cont--;
        
    }
    
    matriz [n/2][n/2] = sum;
    cout<<endl;
    
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