/*
HDOJ 1091 A+B for Input-Output Practice (III)
https://acm.hdu.edu.cn/showproblem.php?pid=1091

���룺�������� a �� b���� a �� b ������ 0 ��ʱ�򣬳��������
�����a �� b �ĺ�
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (!a && !b) {
            break;
        }
        cout << a + b << endl;
    }
    return 0;
}
