#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    // ����ָ��
    // ָ������ָ��
    const int* p = &a;
    // *p = 6; ����
    p = &b;
    cout << "p = " << *p << endl;

    return 0;
}