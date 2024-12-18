#include <iostream>
using namespace std; //8

int main()
{
    int n,sa,sd,ca,cd;
    cin>>n;
    int vec[n];
    for(int i = 0; i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i =0; i<n;i++)
    {
        if(vec[i]>10)
        {
            sa = sa + vec[i];
            ca++;
        }
        else
        {
            sd += vec[i];
            cd++;
        }
    }
    
    sa = sa / ca;
    sd = sd / cd;
    cout<<"Prommedio de Aprobados: "<<sa <<" Cantidad de Aprobados: "<<ca<<endl;
    cout<<"Promodio de Desaprobados: "<<sd <<" Cantidad de Desaprobados: "<<cd;
    
    return 0;
}