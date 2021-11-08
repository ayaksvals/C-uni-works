#include <iostream>
#include <math.h>

int main(){
    int a, b, c, pr;
    std::cout<<"Press a, b, c \n";
    std::cin>>a>>b>>c;
    if (abs(a)<pow(2,10) && abs(b)<pow(2,10) && abs(c)<pow(2,10)){   //b) pow(2,10)->pow(2,21)
        pr=a*b*c;
        std::cout<<"Product="<<pr;
    }
    else{
        std::cout<<"Condition rejected";
    }
}