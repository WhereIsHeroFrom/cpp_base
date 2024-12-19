#include <iostream>

using namespace std;

/*
 
 const 和 指针的关系

*/

int main() {
    int a = 1;
    int b = 2;
    // 指针常量
    // 指针的值是一个常量
    int* const p = &a;
    // p = &b;   错误
    *p = 6;
    cout << "a = " << a << endl;

    return 0;
}