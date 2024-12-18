#include <iostream>
using namespace std; // suma en cruz

int main()
{
    int a =0,n =3, nm =1;
    int matriz[100][100];
    
    int temp, temp2;
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
    
    int nb= n/2;
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(i==nb||j==nb)
            {
                sum += matriz[i][j];
            }
        }
    }
    
    cout <<endl<< "Suma: " << sum<< endl;
    
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