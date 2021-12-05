#include <iostream>
using namespace std;

int main()
{
    int n, m;
    float arr[3][3],a;

    while(true)
    {

    printf("Enter n and m ");
    scanf("%d %d", &n, &m);
    if(n <= 2 && m <= 2)
        break;
    }

    printf("Enter a ");
    scanf("%f", &a);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    for(int i = 0; i < 3; i++)
    {
        printf("\n");
        for(int j = 0; j < 3; j++)
        {
            if((i == n) && (j == m))
                arr[i][j] = a;
            cout << arr[i][j] << " ";
        } 
    }  


    
}