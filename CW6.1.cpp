#include <iostream>
#include <math.h>
using namespace std;




int main()
{
    unsigned short n;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n > 64) {
        printf("Enter number: ");
        scanf("%d", &n);
    }
    printf("%d", 1 << n);
   
}

