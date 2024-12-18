#include <iostream>
using namespace std; // Suma de cuadrantes

int main()
{
    int a =0,n =4, nm =1;
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
    
    int nb=1;
    int na =0;
    int pos =na;
    int vec[4] ={0};
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            vec[pos] += matriz[i-1][j-1];
            //cout <<pos<<"."<<vec[pos]<<" ";
            cout << nb <<" ";
            //cout << pos<<"/";
            //cout <<na<< " " << endl;
            if(nb%(n/2)==0)
            {
                pos++;
            }
            if(nb%(n)==0)
            {
                pos = na;
            }
            
            if(nb%(n*(n/2))==0)
            {
                na+=2;
                pos = na;
            }
            nb++;
        }
    }
    
    for(int i =0; i<4; i++)
    {
       cout <<vec[i]<< " ";
    }
    
    
    return 0;
}