#include <iostream>

using namespace std;

/*
 
 const �� ָ��Ĺ�ϵ

*/

int main() {
    int a = 1;
    int b = 2;
    // ָ�볣��
    // ָ���ֵ��һ������
    int* const p = &a;
    // p = &b;   ����
    *p = 6;
    cout << "a = " << a << endl;

    return 0;
}