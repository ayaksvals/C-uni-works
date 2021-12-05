#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>  
using namespace std;

int main()
{
    int n[5], max, m;
    printf("Enter the value ");                                          


    for(int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }
    max = n[0];

    for(int i = 0; i < 5; i++)
    {
        if(max < n[i])
            max = n[i];
    }
    printf("Max = %d",max);
}