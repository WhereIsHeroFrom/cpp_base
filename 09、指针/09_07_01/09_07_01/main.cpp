#include <iostream>
using namespace std;

// ������ֵ����
void swap(int a, int b) {
    cout << "���ú����� a �ĵ�ַ = " << &a << endl;
    cout << "���ú����� b �ĵ�ַ = " << &b << endl;
    int temp = a;
    a = b;
    b = temp;
}

// ������ַ����
void swap(int* a, int* b) {
    cout << "���ú����� a �ĵ�ַ = " << a << endl;
    cout << "���ú����� b �ĵ�ַ = " << b << endl;
    cout << "----------------" << endl;
    int temp = *a;
    cout << "���ú����� a ��ֵ = " << *a << endl;
    cout << "���ú����� b ��ֵ = " << *b << endl;
    cout << "���ú���temp ��ֵ = " << temp << endl;
    cout << "----------------" << endl;
    *a = *b;
    cout << "���ú����� a ��ֵ = " << *a << endl;
    cout << "���ú����� b ��ֵ = " << *b << endl;
    cout << "���ú���temp ��ֵ = " << temp << endl;
    cout << "----------------" << endl;
    *b = temp;
    cout << "���ú����� a ��ֵ = " << *a << endl;
    cout << "���ú����� b ��ֵ = " << *b << endl;
    cout << "���ú���temp ��ֵ = " << temp << endl;
    cout << "----------------" << endl;
}

int main() {
    int a = 1;
    int b = 2;
    cout << "���ú���ǰ a �ĵ�ַ = " << &a << endl;
    cout << "���ú���ǰ b �ĵ�ַ = " << &b << endl;
    swap(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------" << endl;
    return 0;
}