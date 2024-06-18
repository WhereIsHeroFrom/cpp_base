/*
HDOJ 2099 ������β��
https://acm.hdu.edu.cn/showproblem.php?pid=2099


*/

#include <iostream>
using namespace std;

// a=200, b=40, ����ֵ[00, 40, 80], *returnSize = 3
int* calcTail(int a, int b, int* returnSize) {    // 1������ֵ������������׵�ַ��returnSize ���ⲿ��������һ����ַ
    *returnSize = 0;                              // 2�����ⲿ�������������С�����г�ʼ��
    int* ret = new int[100];                      // 3������һ�������ڴ棬���100��Ԫ��
    for (int i = 0; i < 100; ++i) {
        if ((a * 100 + i) % b == 0) {             // 4��ö�����е�ĩ��λ�������ж��Ƿ��������������������������
            ret[(*returnSize)++] = i;             // 5��(*returnSize)++ ��������Ĵ�С + 1
        }
    }
    return ret;
}


int main() {
    int a, b;
    while (cin >> a >> b) {
        if (!a && !b) {
            break;
        }
        int size;
        int* ret = calcTail(a, b, &size);
        for (int i = 0; i < size; ++i) {
            if (i) {
                cout << " ";
            }
            if (ret[i] < 10) {
                cout << "0";
            }
            cout << ret[i];
        }
        cout << endl;
        delete[] ret;
    }
    return 0;
}
