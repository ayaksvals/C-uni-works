#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  long double a;
  printf("a = ");
  scanf("%Lf", &a);
  long double b = pow(a, 8);
  printf("b=%Lf\n", b);
  printf("b=%24.4Lf\n", b);
  return 0;
}



