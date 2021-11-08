#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, p, S;
	printf("Side a\n");
	scanf("%f", &a);
	printf("Side b\n");
	scanf("%f", &b);
	printf("Side c\n");
	scanf("%f", &c);
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("S=%f",S);
	return 0;
}