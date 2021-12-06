#include <iostream>
using namespace std;

int main()
{
    int n,s;
    printf("Enter n ");
    scanf("%d",&n);
    s = 0;

    int *array = new int[n];

    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
        s += array[i] * array[i];
    }
    delete [] array;
    printf("s = %d",s);
    

    

}