#include <stdio.h>

int main(){
    float C;
    int F;
    printf("Enter degrees Celsius \n");
    scanf("%f", &C);
    F=9*C/5+32;
    printf("F=%d",F);
}