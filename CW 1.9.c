#include <stdio.h>

int main(){
    float a, b, av, avh;
    printf("Enter a and b \n");
    scanf("%f %f", &a, &b);
    av=(a+b)/2;
    avh=2/(1.0/a+1.0/b);
    printf("%le \n",av);
    printf("%le \n",avh);
    printf("%f \n",av);
    printf("%f \n",avh);
}