#include <iostream>
using namespace std;

// º¯ÊıÖ¸Õë
double (*ptr)(int a, int b, int c);
void (*ptr1)(int a, int b);

double func(int a, int b, int c) {
    cout << a << "," << b << "," << c << endl;
    return 0.0;
}

void func1(int a, int b) {
    cout << a << "," << b << endl;
}

int main() {
    ptr = func;
    ptr(4, 5, 6);
    // ptr = func1; ´íÎó
    ptr1 = func1;
    ptr1(5, 6);

    return 0;
}