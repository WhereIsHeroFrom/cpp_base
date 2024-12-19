#include <iostream>
using namespace std;

int* getGapList(int *arr, int size) {
    int *p = new int[size - 1];
    // int a[size-1];  return a;  a 是栈上的内存，不能作为返回值返回
    for (int i = 0; i < size - 1; ++i) {
        p[i] = arr[i + 1] - arr[i];
    }
    return p;
}

int main() {
    int arr[] = { 1,5,6,4,4,3,3,2,1,9 };
    int* p = getGapList(arr, 10);
    for (int i = 0; i < 9; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p;
    p = NULL;

    return 0;
}
