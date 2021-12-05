#include <iostream>
using namespace std;
const int N = 100;

void input(int a[N][N], int n, int m)
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

void print(int a[N][N], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for(int j = 0; j < m; j++)
            cout << a[i][j] << " ";
    }
}

void sum(int a[N][N], int n, int m, int k)
 {

    int s = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i - j == k)
                s += a[i][j];
        }
    }
    cout << s << endl;
    
}

int main()
{
    int n, m;

    while(true)
    {
    printf("Enter n and m ");
    scanf("%d %d",&n, &m);
    if(n < 100 && m < 100)
        break;
        else
            printf("Enter n and m that < 100 \n");
    }

    int a[N][N];
    input(a, n, m);
    print(a, n, m);

    printf("\nsum  =  ");
    sum(a, n, m, -1);
    return 0;
}