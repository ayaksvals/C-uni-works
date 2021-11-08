#include <iostream>

int main(){
    int n, a, b, c;
    std::cout<<"n=";
    std::cin>>n;
    a=n/100;
    b=n/10%10;
    c=n%10;
    if (a!=b && a!=c && b!=c){
        std::cout<<"Condition accepted \n";
        std::cout<<a<<c<<b<<"\n";
        std::cout<<b<<a<<c<<"\n";
        std::cout<<b<<c<<a<<"\n";
        std::cout<<c<<a<<b<<"\n";
        std::cout<<c<<b<<a<<"\n";
    }
    else{
        std::cout<<"Condition rejected";
    }
}