// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int func(double x, double y){
    if (x-y>=7) return 1;
    return 0;
}

int main() {
    cout << " x=? y=? ";
    double x,y; 
    cin >> x>>y;
    if (func(x,y)==1) cout<<"x>y на 7-Правда";
    else cout<<"x>y на 7-Брехня";
    return 0;
}