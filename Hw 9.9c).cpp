#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

void delete_matrix(int** a, int n) {
    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);
}

int** random_matrix(int m, int n) {
    int **Arr; 
    Arr = new int*[m]; 
    for (int i = 0; i < m; i++)
    {
        Arr[i] = new int[n]; 
        for (int j = 0; j<n; j++) Arr[i][j] = (rand()%10)*(pow(-1,rand()%2));
    }
    return Arr;
}

void print_matrix(int** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
}

int find_abs_min(int** a, int n, int m) {
    int min=abs(a[0][0]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(a[i][j])<min) min=abs(a[i][j]);
        }
    }
    return min;
}



void find_rows(int** a, int n, int m, int min, int*& min_row,int& k){
    k=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(a[i][j])==min){
                min_row[k]=i;
                k++;
                break;
            }
        }
    }
}


int** delete_row(int** a, int k, int n, int m)
{
    for (int i = k; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++) a[i][j] = a[i+1][j];
        
    }
    return a;
}


int main(void)
{
    int m,n;
    cout<<"Введите размерность 2-мерной матрицы(через пробел) : ";
    cin>> n >> m;
    int** Arr=random_matrix(n,m);
    print_matrix(Arr,n,m);
    
    int p,min_abs=find_abs_min(Arr,n,m);
    
    int* min_row = new int[n];
    find_rows(Arr,n,m,min_abs,min_row,p);
    
    
    int k = 0;
    while (k < p)
    {
        Arr=delete_row(Arr, min_row[k] - k, n, m);
        k++;
    }
    
    cout<< endl << "Полученная матрица : " << endl;
    print_matrix(Arr,n-k,m);
    
    
    delete_matrix(Arr,n-k);
    
    return 0;
}