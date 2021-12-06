#include <iostream>
#include <ctype.h>
using namespace std;

struct chess
{
    int a;
    char b;

};


void print(chess a)
{
   printf("%c%d ", a.b, a.a );
}

chess input()
{
    chess a;

    cin >>  a.b >> a.a;

    return a;
}

bool Ferz(chess a, chess b)
    {
        if (a.a == b.a) 
            return true;

        if (a.b == b.b)
            return true;

            
        if (abs(a.a - b.a) == abs((int)a.b - (int)b.b )) 
            return true;

        return false;
    }

int main() 
{
    printf("Enter the first position ");
    chess a = input();
    while(true)
    {
        if(a.a <= 8 && a.a >= 1)
            if(a.b >= 'a' &&  a.b <= 'h')
                break;
        printf(" Error, enter the first position ");
        a = input();
    }

    printf("Enter the second position ");
    chess b = input();
    while(true)
    {
        if(b.a <= 8 && b.a >= 1)
            if(b.b >= 'a' &&  b.b <= 'h')
                break;
        printf("Error, enter the second position");
        b = input();
    }


    print(a);
    print(b);

    cout << Ferz(a, b);

    return 0;
}