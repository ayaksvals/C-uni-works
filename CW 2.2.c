#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	printf("Side a\n");
	scanf("%f", &a);
	printf("Side b\n");
	scanf("%f", &b);
    c=sqrt(a*a+b*b);
	printf("Side c \n%f",c);
	return 0;
}