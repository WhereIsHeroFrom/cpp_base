#include <iostream>

using namespace std;

/*
-------------------------------
|  5  |  4  |  3  |  2  |  1  |
-------------------------------
   4     4     4     4     4         
*/

int main() {
    // 1、利用指针来访问数组元素
    int a[5] = { 5,4,3,2,1 };
    cout << "数组第一个元素：" << a[0] << endl;
    int* p = a;   // a 代表数组的首地址
    cout << "数组元素首地址：" << a << endl;
    cout << "指针指向的地址：" << p << endl;
    cout << "指针访问：数组的第一个元素" << *p << endl;

    cout << "数组第二个元素的地址：" << &a[1] << endl;
    cout << "指针 + 1  指向的地址：" << p + 1 << endl;
    cout << "指针访问数组第二个元素：" << *(p + 1) << endl;

    cout << "数组第二个元素的地址：" << &a[2] << endl;
    cout << "指针 + 2  指向的地址：" << p + 2 << endl;
    cout << "指针访问数组第三个元素：" << *(p + 2) << endl;

    p++;
    cout << "指针访问：数组第二个元素: " << *p << endl;

    // a++;

    p = a;
    for (int i = 0; i < 5; ++i) {
        cout << "数组的第" << (i + 1) << "个元素是" << *p << endl;
        p++;
    }

    double b[4] = { 4,3,2,1 };
    double* pd = b;
    cout << "第一个元素的地址：" << pd << endl;
    pd++;
    cout << "第二个元素的地址：" << pd << endl;

    // 指针的+1，实际上是偏移了 sizeof(对应的指针类型) 个字节
    // char、short、long long、float 
    return 0;
}
