#include <iostream>

int main(){
    int n, a, b, c, sum, newn;
    std::cout<<"n=";
    std::cin>>n;
    a=n/100;
    b=n/10%10;
    c=n%10;
    std::cout<<"Count of hundreds "<<a<<"\n";
    std::cout<<"Count of dozens "<<b<<"\n";
    std::cout<<"Count of units "<<c<<"\n";
    std::cout<<"Sum of numbers "<<a+b+c<<"\n";
    std::cout<<"Revers number "<<c<<b<<a;
}