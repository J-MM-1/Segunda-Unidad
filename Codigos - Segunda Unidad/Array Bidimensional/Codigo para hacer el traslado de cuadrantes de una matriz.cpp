#include <iostream>
using namespace std; // Trasladó de cuadrantes 

int main()
{
    int a =0,n =4, nm =1;
    int matriz[100][100];
    
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matriz [i][j] = nm;
            nm++;
            if(j==n-1)
            {
                nm=1;
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
    
    cout << endl;
    
    
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<(n/2);j++)
        {
            temp = matriz [i][j];
            matriz [i][j] = matriz [i][j+(n/2)];
            matriz [i][j+(n/2)]=temp;
        }
    }
    
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