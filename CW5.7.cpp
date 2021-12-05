#include <iostream>
#include <math.h>
using namespace std;




int main()
{
    float S,a,b,a1,a2,b1,b2,n;

    a1 = 0.0;
    a2 = 1.0;
    b1 = 1.0;
    b2 = 0.0;
    S = 6.0;

    printf("Enter n ");
    scanf("%f", &n);

    for(int i = 3; i <= n; i++)
    {
        b = b2 + a2;
        a = (a2 / i) + a1 * b;

        S += pow(2,i)/(a + b);
        a1 = a2;
        a2 = a;
        b1 = b2;
        b2 = b;
    }

    printf("S = %f",S);
}

