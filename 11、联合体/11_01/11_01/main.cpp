#include <iostream>
using namespace std;

struct DataS {
    int i;
    double d;
    char s[10];
};

union DataU {
    int i;     // 4
    double d;  // 8
    char s[10];// 10
};

/*
1、定义和使用分开
union DataU {
    int i;     // 4
    double d;  // 8
    char s[10];// 10
};
DataU a, b, c;

2、定义和使用结合
union DataU {
    int i;     // 4
    double d;  // 8
    char s[10];// 10
}a, b, c;

3、匿名：不想让别人使用
union {
    int i;     // 4
    double d;  // 8
    char s[10];// 10
}a, b, c;

*/

int main() {
    DataS ds;
    cout << &ds.i << "," << &ds.d << "," << (void *)ds.s << endl;

    DataU du;
    cout << &du.i << "," << &du.d << "," << (void*)du.s << endl;

    return 0;
}