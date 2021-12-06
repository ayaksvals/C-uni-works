#include <iostream>
#include <math.h>
using namespace std;

int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
 
    fVar=sqrt((double)number);
    iVar=fVar;
 
    if(iVar==fVar)
        return 1;
    else
        return 0;
}

int isPerfectcub(int number)
{
    int iVar;
    float fVar;
 
    fVar=pow((double)number, double(1.0 / 3.0));
    iVar=fVar;
 
    if(iVar==fVar)
        return 1;
    else
        return 0;
}

void input()
{
    int k,p,m;
    k = 0;
    p = 0;
    m = 0;

    int *array = new int[100];

        for(int i = 0; true; i++)
        {
            scanf("%d", &array[i]);
            k += 1;

            if(isPerfectSquare(array[i - 1]))
                p += 1;

            if(isPerfectcub(array[i - 1]))
                m += 1;
            
            if(array[i] == 0)
                break;

        }

    printf("k = %d",k - 1);
    printf("\nК-сть повних квадратів = %d",p);
    printf("\nК-сть повних кубів = %d",m);


}

int main()
{
    input();
}