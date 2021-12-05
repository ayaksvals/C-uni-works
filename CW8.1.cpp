#include <iostream>
using namespace std;

int main()
{
    int n, m, arr[3][3];

    printf("Enter n and m ");
    scanf("%d %d",&n, &m);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
             cin >> arr[i][j];


    for(int i = 0; i < 3; i++)
    {
        printf("\n");
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == m)
                arr[i][j] = n;
            cout << arr[i][j] << " " ;
        }
    }
    
}