/*
HDOJ 2021 �����ʿ�����
https://acm.hdu.edu.cn/showproblem.php?pid=2021

���ÿ����ʦ�Ĺ��ʶ֪����������Ҫ׼������������ң������ڸ�ÿλ��ʦ�����ʵ�ʱ�򶼲�����ʦ�����أ�
���������ʦ�Ĺ��ʶ�������������λԪ�������һ����100Ԫ��50Ԫ��10Ԫ��5Ԫ��2Ԫ��1Ԫ���֡�

���룺��������һ������n��n<100������ʾ��ʦ��������Ȼ����n����ʦ�Ĺ��ʡ�n=0��ʾ����Ľ�������������
��������һ������ x, ��ʾ������Ҫ׼���������������

*/

#include <iostream>
using namespace std;

// 753 = 7 + 1 + 1 + 1 = 10
int calc(int n) {
    int b[] = { 100, 50, 10, 5, 2, 1 };
    int cnt = 0;
    for (int i = 0; i < 6; ++i) {
        int x = n / b[i];
        cnt += x;
        n -= x * b[i];
    }
    return cnt;
}

int main() {
    int n;
    int x;
    while (cin >> n && n) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += calc(x);
        }
        cout << sum << endl;
    }
    return 0;
}
