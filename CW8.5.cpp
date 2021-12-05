#include <iostream>
using namespace std;
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

void transpose(float a[N][N], int n, int m) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            int x = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = x;
        }
    }
}

int main()
{
    int n, m;
    while(true)
    {
    printf("Enter n and m ");
    scanf("%d %d",&n, &m);
    if(n == m)
        break;
        else
            printf("Enter n, which equals m \n");
    }

    float a[N][N];
    input(a, n, m);
    print(a, n, m);

    printf("\ntranspose matrix - ");
    transpose(a, n, m);
    print(a, n, m);
    return 0;
}