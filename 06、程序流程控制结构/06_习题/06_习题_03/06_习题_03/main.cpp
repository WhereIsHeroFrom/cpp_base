/*
HDOJ 1090 A+B for Input-Output Practice (II)
https://acm.hdu.edu.cn/showproblem.php?pid=1090

���룺����һ��n��Ȼ������n�����ݣ�ÿ��������a��b
�����n�У�ÿ���� a+b �ĺ�

*/

#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}
