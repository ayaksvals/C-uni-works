#include <stdio.h>
#include <math.h>

int main(){
    float a1=pow(10,-4), b1=24.33E5, c1=acos(-1), d1=exp(1), e1=sqrt(5), f1=log(100);
    printf("%f %f %f %f %f %f \n", a1, b1, c1, d1, e1, f1);
    double a2=pow(10,-4), b2=24.33E5, c2=acos(-1), d2=exp(1), e2=sqrt(5), f2=log(100);
    printf("%lf %lf %lf %lf %lf %lf \n", a2, b2, c2, d2, e2, f2);
    long double a3=pow(10,-4), b3=24.33E5, c3=acos(-1), d3=exp(1), e3=sqrt(5), f3=log(100);
    printf("%Lf %Lf %Lf %Lf %Lf %Lf", a3, b3, c3, d3, e3, f3);
}