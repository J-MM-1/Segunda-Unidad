#include <iostream>
using namespace std; // Centro de 0

int main()
{
    int a =0,n =5, nm =1;
    int matriz[100][100];
    
    int temp, temp2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matriz [i][j] = nm;
            nm++;
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
            matriz [i][j] = 0;
            
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