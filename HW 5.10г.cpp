/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n) {
    if (n>1) {
        return n*factorial(n-1);
    } 
    return 1;
}

int func(int n) {
    if (n==1) return 0;
    else if (n==2) return 1;
    return func(n-1)+func(n-2)/factorial(n-1);
}

int main() {
    cout << " n=? ";
    double result=0; 
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        result+=factorial(i)*func(i);
    }
    cout<<result;

} 