#include <iostream>
using namespace std;

int& getArrayValue(int arr[], int index) {
    return arr[index];
}

int main() {
    int a[] = { 8,7,6,5,4,3 };
    cout << getArrayValue(a, 3) << endl;

    getArrayValue(a, 3) = 999;   // a[3] = 999;

    cout << getArrayValue(a, 3) << endl;

    return 0;
}