#include <stdio.h>
#include <math.h>

int main(){
    float x, xr, xrof;
    int xmin, xmax, xro;
    printf("x=");
    scanf("%f",&x);
    if (x>0){
        xr=x-(int) x;
        xmin=x+1;
        xmax=x;
        xrof=x+0.5;
        xro=xrof;
    }
    else{
        xr=x+(int) x;
        xmin=x;
        xmax=x-1;
        xrof=x-0.5;
        xro=xrof;
    }
    printf("Integer part = %d \n",(int) x);
    printf("Fractional part = %f \n",x-(int) x);
    printf("Greater integer minimum = %d \n",xmin);
    printf("Less integer maximum = %d \n",xmax);
    printf("Rounded = %d \n",xro);
    printf("With formulas \n");
    xmin=ceil(x);
    xmax=floor(x);
    xro=round(x);
    printf("Integer part = %d \n",(int) x);
    printf("Fractional part = %f \n",x-(int) x);
    printf("Greater integer minimum = %d \n",xmin);
    printf("Less integer maximum = %d \n",xmax);
    printf("Rounded = %d \n",xro);
}