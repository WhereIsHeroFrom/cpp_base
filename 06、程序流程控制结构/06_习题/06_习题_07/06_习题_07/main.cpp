/*
HDOJ 1094 A+B for Input-Output Practice (VI)
https://acm.hdu.edu.cn/showproblem.php?pid=1094

���룺����һ��n��Ȼ��n������
�����n�У�ÿ��һ������������������һ�������Ԫ��֮��
*/

#include <iostream>
using namespace std;

int main() {
    int n, x, sum;
    while (cin >> n) {
        sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}
