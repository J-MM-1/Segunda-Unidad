#include <iostream>
using namespace std; //Inversion de diagonales

int main()
{
    int a =0,n =4, nm =0;
    
    int matriz[100][100];
    
    int temp, temp2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matriz [i][j]=nm;
            nm ++;
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
    
    
    int cont = n - 1;
    for(int i=0;i<n;i++)
    {
        int temp;
        temp = matriz [i][i];
        matriz [i][i] = matriz[i][cont];
        matriz[i][cont] = temp;
        cont--;
        
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
    return 0;
}