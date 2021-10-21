#include <iostream>
using namespace std;
 
int main() {
    int n=10;
    int a[n]={11,2,3,-1,2,1,3,3,2,2};
    int min;
    min=a[0];
    
    for (int i=0; i<n-1; i++) {
        if (a[i]*(i+1)<min) min=a[i]*(i+1);
    }
    
    cout << endl<<"min "<< min;
    return 0;
}