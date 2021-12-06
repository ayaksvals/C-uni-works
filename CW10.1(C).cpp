#include <iostream>
using namespace std;

typedef struct {
    struct {
        int x, y;
    } p1, p2;
} Rect;

Rect input()
{
    Rect a;

    cin >> a.p1.x >> a.p1.y >> a.p2.x >> a.p2.y;

    return a;
}

void print(Rect a)
{
    cout << a.p1.x << ends << a.p1.y << endl <<
    a.p2.x << ends << a.p2.y << endl;
}


int main()
{
    Rect r = 
    {
        {1 , 0}, {2, 3}
    };
    print(r);

    print(r);
    Rect t = input();
    print(t);
    return 0;
}