#include <iostream>
using namespace std;

// 1、必须初始化
// 2、初始化以后无法修改

int main() {
    // int& a; 错误写法
    int a = 3, c = 6;
    int& b = a;
    b = c;  // b = 6;
    cout << a << b << c << endl;
    return 0;
}