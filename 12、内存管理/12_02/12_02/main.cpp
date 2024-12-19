#include <iostream>
using namespace std;

// 全局区
// 全局变量、全局常量、静态变量、字符串常量

int g_a = 1;
int g_b = 2;
const int c_g_a = 3;
const int c_g_b = 4;

int main() {
    cout << "全局变量g_a的地址：" << &g_a << endl;
    cout << "全局变量g_b的地址：" << &g_b << endl;

    int c = 3;
    int d = 4;
    static int e = 5;
    static int f = 6;
    cout << "局部变量c的地址：" << &c << endl;
    cout << "局部变量d的地址：" << &d << endl;
    cout << "静态变量e的地址：" << &e << endl;
    cout << "静态变量f的地址：" << &f << endl;

    cout << "字符串常量的地址：" << &"英雄哪里出来" << endl;

    const int g = 7;
    const int h = 8;
    cout << "局部常量g的地址：" << &g << endl;
    cout << "局部常量h的地址：" << &h << endl;

    cout << "全局常量c_g_a的地址：" << &c_g_a << endl;
    cout << "全局常量c_g_b的地址：" << &c_g_b << endl;

    return 0;
}