// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <math.h>

double l(double p, double a, double b, double c){
    return 2.0/(a+b)*sqrt(a*b*p*(p-c));
}

double h(double p, double a, double b, double c){
    return 2.0/a*sqrt(p*(p-a)*(p-b)*(p-c));
}

double m(double p,double a, double b, double c){
    return sqrt(2*pow(b,2)+2*pow(c,2)-pow(a,2))/2.0;
}


int main() {
    cout << " a=? b=? c=? ";
    double a,b,c; 
    cin >> a>>b>>c;
    double p=(a+b+c)/2.0;
    
    double lc=l(p,a,b,c), la=l(p,c,a,b), lb=l(p,b,c,a);
    double ha=h(p,a,b,c), hc=h(p,c,a,b), hb=h(p,b,c,a);
    double ma=m(p,a,b,c), mc=m(p,c,a,b), mb=m(p,b,c,a);
    
    cout <<"la="<<la<<" lb="<<lb<<" lc="<<lc<<endl;
    cout <<"ha="<<ha<<" hb="<<hb<<" hc="<<hc<<endl;
    cout <<"ma="<<ma<<" mb="<<mb<<" mc="<<mc<<endl;

   
    return 0;
}