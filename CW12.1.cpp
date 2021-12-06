#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y, res;
    cout << "Enter x and y " << endl;

    cin >> x >> y;

    cout.setf(ios :: scientific);
    res = pow(x, y);

    cout << res << endl;




}