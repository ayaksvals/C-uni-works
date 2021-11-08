#include <stdio.h>
#include <math.h>
int main(){
    float m1, m2, r, y, F;
    y=6.673*pow(10,-11);

    printf("m1=");
    scanf("%f", &m1);

    printf("m2=");
    scanf("%f", &m2);

    printf("r=");
    scanf("%f", &r);

    F=y*m1*m2/(r*r);
    printf("F=%le",F);
}