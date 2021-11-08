#include <stdio.h>

int main(){
    float a, b, s, d;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    s=a+b;
    d=a-b;
    printf("%.2f \n",s);
    printf("%.2f \n",d);
}