#include <iostream>
using namespace std; // Lados de cero y uno

int main()
{
    int a =0,n =4, nm =0;
    int con=0;
    int matriz[100][100];
    
    int temp, temp2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(con %2==0)
            {
                matriz [i][j] = 0;
                con++;
            }
            else 
            {
                matriz [i][j] = 1;
                con++;
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
    
    int cont = n + 2;
    for(int i=1;i<n-1;i++)
    {
        for (int j=1;j<n-1;j++)
        {
            matriz [i][j] = cont;
            cont++;
            if(j==n-2)
            {
                cont+=2;
            }
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