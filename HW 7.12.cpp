#include <iostream>
using namespace std;
 
int main() {
    int n=10;
    int a[n]={11,2,0,1,2,1,3,3,2,2};
    int counter,max;
    max=0;
    
    for (int i=0; i<n-1; i++) {
        counter=1;
        for (int j=i+1; j<n; j++) {
            if (a[i]==a[j]) counter++;
            if (counter>max) max=counter; 
        }
    }
    
    for (int i=0; i<n-1; i++) {
        counter=1;
        for (int j=i+1; j<n; j++) if (a[i]==a[j]) counter++;
        if (counter==max) cout << a[i] << " ";
    }
    
    cout << endl<<"max amount of elements "<< max;
    return 0;
}