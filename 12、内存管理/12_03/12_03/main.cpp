#include <iostream>
using namespace std;

char* func() {
    char c[20] = "Ӣ���������";
    return c;
}

void test(int a, int b) {
    int c, d;
    cout << "��ʽ����a�ĵ�ַ��" << &a << endl;
    cout << "��ʽ����b�ĵ�ַ��" << &b << endl;
    cout << "�ֲ�����c�ĵ�ַ��" << &c << endl;
    cout << "�ֲ�����d�ĵ�ַ��" << &d << endl;
}


int main() {
    cout << func() << endl;
    test(5, 6);
    return 0;
}