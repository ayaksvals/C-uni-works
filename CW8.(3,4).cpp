#include <iostream>
using namespace std;

/*
//8.3
const int N = 20;
void input(float a[N][N], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        printf("\n");
        for(int j = 0; j < m; j++)
        {
            printf("Enter a[%d][%d] -- > ",i + 1, j + 1);
            cin >> a[i][j];
        }
    }
}

void print(float a[N][N], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for(int j = 0; j < m; j++)
            cout << a[i][j] << " ";
    }
}
*/


//8.4
const int N = 20;

void input(float a[N][N], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        printf("\n");
        for(int j = 0; j < m; j++)
        {
            printf("Enter a[%d][%d] -- > ",i + 1, j + 1);
            cin >> a[i][j];
        }
    }
}

void print(float a[N][N], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for(int j = 0; j < m; j++)
            cout << a[i][j] << " ";
    }
}


int main()
{
    int n, m;
    printf("Enter n and m ");
    scanf("%d %d",&n, &m);

    float a[N][N];
    input(a, n, m);
    print(a, n, m);
    return 0;
}