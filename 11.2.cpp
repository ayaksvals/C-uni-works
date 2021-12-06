#include <iostream>
using namespace std;
#define N 100

void write_binary_file(char* filename, float arr[], int n) {
    FILE* f = fopen(filename, "wb");
    if (!f) exit(1);

    fwrite(arr, sizeof (float), n, f);

    fclose(f);
}

int read_binary_file(char* filename, float arr[]) {
    FILE* f = fopen(filename, "rb");
    if (!f) exit(1);

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    int n = size / sizeof (float);

    fseek(f, 0, SEEK_SET);
    fread(arr, sizeof (float), n, f);

    fclose(f);
    return n;
}

int main() {
    char F[10] = "F.float";
    char G[10] = "G.float";

    float a = 5.0;

    int n1 = 8;
    float arr1[N] = {1.2, 2.0, 3.2, -1.9, 77.7, 10.4, 6.8, 3.19};
    write_binary_file(F, arr1, n1);

    float arr2[N] = {};
    int n2 = read_binary_file(F, arr2);
    for(int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    float arr3[N] = {}, arr4[N] = {};
    int n3 = 0, n4 = 0;
    for(int i = 0; i < n2; i++)
    {
        if(abs(arr2[i]) < a)
            arr3[n3++] = arr2[i];
        else
            arr4[n4++] = arr2[i];
    }

    write_binary_file(G, arr3, n3);
    for(int i = 0; i < n3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    write_binary_file(F, arr4, n4);
    for(int i = 0; i < n4; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;

    return 0;
}