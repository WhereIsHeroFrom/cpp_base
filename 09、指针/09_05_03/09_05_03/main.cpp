#include <iostream>

using namespace std;

/*
ָ�볣��          tpye* const        ָ��ֵ��һ������                ָ���޷�����ֵ
����ָ��          const type*        ָ������ָ��                  ָ������ú��޷�����ֵ
����ָ�볣��      const type* const  ָ��ֵ��ָ��ָ���ֵ���ǳ���    ָ��ͽ����ö��޷�����ֵ
*/

int main() {
    int a = 1;
    int b = 2;
    // ����ָ�볣��
    const int* const p = &a;
    // *p = 6;  ����
    // p = &b;  ����

    return 0;
}
