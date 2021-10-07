#include <iostream>
using namespace std;

int func(double x, double y, double z){
    return ((x>99) or (y>99) or (z>99));
}

int main() {
    cout << " x=? y=? z=? ";
    double x,y,z; 
    cin >> x>>y>>z;
    if (func(x,y,z)==1) cout<<"Одне з чисел більше 99";
    else cout<<"Немає числа більше 99";
    return 0;
} 
