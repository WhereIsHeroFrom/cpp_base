#include <iostream>
using namespace std;

// 1�������ʼ��
// 2����ʼ���Ժ��޷��޸�

int main() {
    // int& a; ����д��
    int a = 3, c = 6;
    int& b = a;
    b = c;  // b = 6;
    cout << a << b << c << endl;
    return 0;
}