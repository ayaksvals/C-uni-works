#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    cout<<"a=?  b=?  ";
    float a,b;
    cin>>a>>b;
    if (a>b) cout<<a<<" більше "<<b;
    else if (b>a) cout<<b<<" більше "<<a;
        else cout<<"рівні";
    
    
}