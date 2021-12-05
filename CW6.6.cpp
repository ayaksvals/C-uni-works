#include <iostream>
#include <bitset>
#include <climits>
using namespace std;

void printt(int n)
{
    cout << bitset < sizeof(n) * CHAR_BIT > (n) << endl;
}

int main()
{
    /* 1)виконується диз'юнкція x та x - 1, в результаті ми маємо 0 в будь-якому випадку
       2)виконується диз'юнкція x та протилежного до x, тобто -x, в результаті будемо мати 1, крім того випадку, коли 
        x = 0 */
    
    bool x,y;
    cout << "Enter x ";
    cin >> x;
    printt(x);
    cout << x << endl;

    // 1)
    y = x & (x - 1 );

    cout << y << endl;
    //2)
    y = x & (-x);

    cout << y << endl;


}