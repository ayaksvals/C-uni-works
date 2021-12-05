#include <iostream>
using namespace std;
 

float input( int n, float *arr)
{

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return *arr;
}

float  scalar_product(int n, float *arr, float *arr_2 , float product )
{
    product = 0.0;
    for(int i = 0; i < n; i++)
    {
        product += arr[i] * arr_2[i];
    }
    cout << product;
    return 0;
}

float summ(int n, float *arr, float *arr_2 , float *arr_3 )
{

    for(int i = 0; i < n; i++)
    {
        arr_3[i] = arr[i] + arr_2[i];
    }
    return *arr_3;
}



float output( int n, float *arr)
{

    for(int i = 0; i < n; i++)
    {
         cout << arr[i] << " ";
    }
    return 0;
}

int main()
{
    int n;
    float arr[20], arr_2[20], arr_3[20], product;

    product = 0.0;

    while(true)
    {
    printf("Enter the size of vector №1 && №2 ");
    scanf("%d",&n);
    if ( n < 20 )
        break;
    }
    
    cout << "Enter the first vector " << endl;
    input(n, arr);
    cout << "Enter the second vector" << endl;
    input(n,arr_2);
    
    cout << "The sum of vectors equals - " << endl;
    summ(n, arr, arr_2, arr_3);
    output(n, arr_3);

    cout << "\nThe scalar product of vectors equals - " << endl;
    scalar_product(n, arr, arr_2, product);
    

}