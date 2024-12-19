#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    // 常量指针
    // 指向常量的指针
    const int* p = &a;
    // *p = 6; 错误
    p = &b;
    cout << "p = " << *p << endl;

    return 0;
}