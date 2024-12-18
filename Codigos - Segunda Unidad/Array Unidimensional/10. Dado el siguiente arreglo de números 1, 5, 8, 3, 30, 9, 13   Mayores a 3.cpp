#include <iostream>
using namespace std; //10

int main()
{
    int vec [7] = {1, 5, 8, 3, 30, 9, 13};
    for(int i = 0; i<7; i++)
    {
        if(vec[i]%2!=0 && vec[i]>3)
        {
            cout<<vec[i]<<" ";
        }
    }
    return 0;
}