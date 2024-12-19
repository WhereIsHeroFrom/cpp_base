#include <iostream>
using namespace std;

char* func() {
    char c[20] = "英雄哪里出来";
    return c;
}

void test(int a, int b) {
    int c, d;
    cout << "形式参数a的地址：" << &a << endl;
    cout << "形式参数b的地址：" << &b << endl;
    cout << "局部变量c的地址：" << &c << endl;
    cout << "局部变量d的地址：" << &d << endl;
}


int main() {
    cout << func() << endl;
    test(5, 6);
    return 0;
}