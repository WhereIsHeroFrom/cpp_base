#include <iostream>
using namespace std;

// ȫ����
// ȫ�ֱ�����ȫ�ֳ�������̬�������ַ������� (ע�⣺ȫ�ֱ�������ȫ����)

int g_a = 1;
int g_b = 2;
const int c_g_a = 3;
const int c_g_b = 4;

int main() {
    cout << "ȫ�ֱ���g_a�ĵ�ַ��" << &g_a << endl;
    cout << "ȫ�ֱ���g_b�ĵ�ַ��" << &g_b << endl;

    int c = 3;
    int d = 4;
    static int e = 5;
    static int f = 6;
    cout << "�ֲ�����c�ĵ�ַ��" << &c << endl;
    cout << "�ֲ�����d�ĵ�ַ��" << &d << endl;
    cout << "��̬����e�ĵ�ַ��" << &e << endl;
    cout << "��̬����f�ĵ�ַ��" << &f << endl;

    cout << "�ַ��������ĵ�ַ��" << &"Ӣ���������" << endl;

    const int g = 7;
    const int h = 8;
    cout << "�ֲ�����g�ĵ�ַ��" << &g << endl;
    cout << "�ֲ�����h�ĵ�ַ��" << &h << endl;

    cout << "ȫ�ֳ���c_g_a�ĵ�ַ��" << &c_g_a << endl;
    cout << "ȫ�ֳ���c_g_b�ĵ�ַ��" << &c_g_b << endl;

    return 0;
}