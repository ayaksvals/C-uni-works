#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>  
using namespace std;

int main()
{
    int n[5],S1,S2,S;
    S1 = 0;
    S2 = 0;
    S = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> n[i];

        if((n[i] % 2) == 0)
            S1 += n[i];
        else
            S2 += n[i];

    }
    S = S1 + S2;
    printf("Cума парних чисел = %d",S1);
    printf("\nCума непарних чисел = %d",S2);
    printf("\nЗагальна сума = %d",S);
    
}