#include <iostream>
using namespace std;

// malloc free
// new delete

int* getV(int v) {
    int* a = new int(v);  // int *a ��һ��ջ�ϵı��� 
    cout << a << endl;    // *a Ҳ���� a �������Ժ�õ���ֵ���Ǵ洢�ڶ������
    return a;             // �������ص�ʱ����Ȼջ�ϵı��� a ������ϵͳ�ͷ��ˣ����� a ָ����ڴ棬���Ǵ��ڵ�
}

int main() {
    int *p = getV(1314);
    cout << *p << endl;   // ���ԣ����ﻹ�ǿ��Խ����ã��õ����ϵ����ݵ�
    cout << p << endl;
    return 0;
}
