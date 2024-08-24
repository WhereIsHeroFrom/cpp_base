#include <iostream>
using namespace std;

int countAndSum(int arr[], int size, int target, int& count) {
    int sum = 0;
    cout << &count << endl;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
            sum += arr[i];
        }
    }
    return sum;
}

struct S {
    int a, b, c, d, e, f, g;
};

void printS(S& s) {
    cout << &s << endl;
    cout << s.a << s.b << s.c << s.d << s.e << s.f << s.g << endl;
}

int main() {
    int arr[] = { 1,2,3,2,4,5,6,4,3,2 };  // 10
    int c = 0;
    cout << &c << endl;
    int sum = countAndSum(arr, 10, 2, c);
    cout << sum << " " << c << endl;

    S s = { 1,2,3,4,5,6,7 };
    cout << &s << endl;
    printS(s);

    return 0;
}
