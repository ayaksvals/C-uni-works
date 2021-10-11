/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;


int main() {
    cout << " n=? x=? ";
    double x,result=1; 
    int n;
    cin>>n>>x;
    for(int i = 1; i <= n; i++) {
      result+=pow(sin(x),i);
    }
    cout<<result;

} 