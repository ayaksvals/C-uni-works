#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>  
using namespace std;

int main()
{
    int k;
    float n, j, x[5];
    printf("Enter n ");
    scanf("%f",&n);

    for(int i = 0; i < 5; i++)
    {
        cin >> x[i];
        if(n > x[i])
        {
            k += 1;
        }
    }
    printf("K = %d",k);

    


}