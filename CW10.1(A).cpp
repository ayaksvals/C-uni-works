#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};


void print(date a)
{
    printf("%d %d %d", a.day, a.month, a.year);
}

date input()
{
    date a;
    
    cin >> a.day >> a.month >> a.year;

    return a;
}

int main() 
{
    date d = {2, 3, 2021};
    print(d);
    printf("\n");

    d.day = 1;
    d.month = 2;
    d.year = 2020;
    print(d);
    
    printf("\n");


    date c = {.day = 4, .month = 12, .year = 2022};
    print(c);
    printf("\n");
    date b = input();
    print(b);
    
    return 0;
}