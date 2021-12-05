#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>  
using namespace std;

int main()
{

    double x[10], S;
    S = 0.0;

    for(int i = 0; i < 10; i++)
    {
        cin >> x[i];
        if( x[i] > M_E)
        {
            S += x[i];
        }
        
    }
    printf("S = %lf", S);


}