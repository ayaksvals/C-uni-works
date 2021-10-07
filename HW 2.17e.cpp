#include <iostream>
#include <math.h> 
using namespace std;

double softPlus(double x){
    cout<<"f(x)=ln(1+e^(x))  "<<endl;
    return (log(1+exp(x)));
}

double softPlus_derivative(double x){
    double del=0.0000001;
    double xdel=x+del;
    cout<<"f'(x)=e^(x)/(1+e^(x))  "<<endl;
    return ((log(1+exp(xdel))-log(1+exp(x)))/del);
}
int main()
{
    cout<<"x= "; // x=2
    double x;
    cin>>x;
    cout<<softPlus(x)<<endl;
    cout<<softPlus_derivative(x);
    return 0;
}