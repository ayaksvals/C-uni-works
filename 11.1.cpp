#include <iostream>
using namespace std;
#define F "F.float"
#define N 100

void write_binary_file(float arr[], int n) {
    FILE* f = fopen(F, "wb");
    if (!f) exit(1);

    fwrite(arr, sizeof (float), n, f);

    fclose(f);
}

int read_binary_file(float arr[]) {
    FILE* f = fopen(F, "rb");
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
    int n1 = 5;
    float arr1[N] = {1.2, 2.0, 3.2, -1.9, 77.7};
    write_binary_file(arr1, n1);

    float arr2[N] = {};
    int n2 = read_binary_file(arr2);
    for(int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}