/*
HDOJ 2003 �����ֵ
https://acm.hdu.edu.cn/showproblem.php?pid=2003

���룺��������һ��ʵ��x
�������� x �ľ���ֵ��������λС��
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    while (cin >> x) {
        x = fabs(x);
        printf("%.2lf\n", x);
    }
    return 0;
}
