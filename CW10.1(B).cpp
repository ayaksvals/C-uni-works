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



int main() 
{

    printf("Enter the first position ");
    chess a = input();
    printf("Enter the second position ");
    chess b = input();

    print(a);
    print(b);

    return 0;
}