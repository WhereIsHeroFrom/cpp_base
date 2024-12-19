#include <iostream>
using namespace std;

// 函数的值传递
void swap(int a, int b) {
    cout << "调用函数后 a 的地址 = " << &a << endl;
    cout << "调用函数后 b 的地址 = " << &b << endl;
    int temp = a;
    a = b;
    b = temp;
}

// 函数的址传递
void swap(int* a, int* b) {
    cout << "调用函数后 a 的地址 = " << a << endl;
    cout << "调用函数后 b 的地址 = " << b << endl;
    cout << "----------------" << endl;
    int temp = *a;
    cout << "调用函数后 a 的值 = " << *a << endl;
    cout << "调用函数后 b 的值 = " << *b << endl;
    cout << "调用函数temp 的值 = " << temp << endl;
    cout << "----------------" << endl;
    *a = *b;
    cout << "调用函数后 a 的值 = " << *a << endl;
    cout << "调用函数后 b 的值 = " << *b << endl;
    cout << "调用函数temp 的值 = " << temp << endl;
    cout << "----------------" << endl;
    *b = temp;
    cout << "调用函数后 a 的值 = " << *a << endl;
    cout << "调用函数后 b 的值 = " << *b << endl;
    cout << "调用函数temp 的值 = " << temp << endl;
    cout << "----------------" << endl;
}

int main() {
    int a = 1;
    int b = 2;
    cout << "调用函数前 a 的地址 = " << &a << endl;
    cout << "调用函数前 b 的地址 = " << &b << endl;
    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------" << endl;
    return 0;
}