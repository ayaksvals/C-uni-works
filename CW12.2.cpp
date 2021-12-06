#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


int main()
{
    int n,m;
    cout << "Enter the size of mas ";

    cin >> n;
    string k, k1;
    unsigned long long S;
    S = 0;

    for(int i = 0; i <= n; i++)
    {   if(i != n)
            cout << "Enter the " << i + 1 << " digit " << endl;

        m = atoi(k1.c_str());
        S += m;
        k1 = "";
        for(int j = 0; j < 10; j++)
        {
            if(i == n)
                break;
            cin >> k;
            k1 += k;

        }
    }

    cout.setf(ios::dec);
    unsigned long long value = S;
    cout << value << endl;

}