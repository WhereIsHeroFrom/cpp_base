/*
HDOJ 2001 ���������ľ���
https://acm.hdu.edu.cn/showproblem.php?pid=2001

���룺������������(x1, y1) �� (x2, y2)
�����������������ŷ����þ��룬���ұ�����λ��Ч���֡�

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        double d = (x1 - x2)* (x1 - x2) + (y1 - y2) * (y1 - y2);
        printf("%.2lf\n", sqrt(d));
    }
    return 0;
}
