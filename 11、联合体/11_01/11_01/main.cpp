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
1�������ʹ�÷ֿ�
union DataU {
    int i;     // 4
    double d;  // 8
    char s[10];// 10
};
DataU a, b, c;

2�������ʹ�ý��
union DataU {
    int i;     // 4
    double d;  // 8
    char s[10];// 10
}a, b, c;

3�������������ñ���ʹ��
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