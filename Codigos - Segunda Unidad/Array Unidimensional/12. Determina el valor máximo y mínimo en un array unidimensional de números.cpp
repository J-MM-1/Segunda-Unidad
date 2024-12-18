#include <iostream>
using namespace std; //12
#include <cmath>

int main() {
    int vec[5]={2,8,9,56,3},mayor=0, menor=100;
    for(int i=0;i<5;i++)
    {
       if(vec[i]<menor)
       {
           menor = vec[i];
       }
       if(vec[i]>mayor)
       {
           mayor = vec[i];
       }
    }
    cout << "Mayor: " <<mayor<< endl;
    cout << "Menor: " <<menor<< endl;
	return 0;
}