#include <iostream>
using namespace std;

// 指针：所以爱会消失，对嘛？
// 引用：给变量取一个别名
// &
// 数据类型& 变量名 = 变量;

void test() {
    int a_very_very_very_very_very_very_very_long_array[8] = { 1, 1 };
    for (int i = 2; i < 8; ++i) {
        a_very_very_very_very_very_very_very_long_array[i] = a_very_very_very_very_very_very_very_long_array[i - 1] * a_very_very_very_very_very_very_very_long_array[i - 1] + a_very_very_very_very_very_very_very_long_array[i - 2] * a_very_very_very_very_very_very_very_long_array[i - 2];
    }
    for (int i = 0; i < 8; ++i) {
        cout << a_very_very_very_very_very_very_very_long_array[i] << " ";
    }
    cout << endl;
    for (int i = 2; i < 8; ++i) {
        a_very_very_very_very_very_very_very_long_array[i] = 0;
    }

    for (int i = 2; i < 8; ++i) {
        int& pre1 = a_very_very_very_very_very_very_very_long_array[i - 1];
        int& pre2 = a_very_very_very_very_very_very_very_long_array[i - 2];
        int& now = a_very_very_very_very_very_very_very_long_array[i];
        now = pre1 * pre1 + pre2 * pre2;
    }
    for (int i = 0; i < 8; ++i) {
        cout << a_very_very_very_very_very_very_very_long_array[i] << " ";
    }
    cout << endl;
}

int main() {
    /*
    int a = 1314;
    int& b = a;
    b = 520;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    */
    int a = 1314;
    int* b = &a;
    *b = 520;
    cout << "a = " << a << endl;
    cout << "b = " << *b << endl;

    test();

    return 0;
}