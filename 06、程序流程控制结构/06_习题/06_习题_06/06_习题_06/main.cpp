/*
HDOJ 1093 A+B for Input-Output Practice (V)
https://acm.hdu.edu.cn/showproblem.php?pid=1093

���룺����һ��t��������t�����ݣ�ÿ����������һ�� n��Ȼ��n������
���������t�����ݣ������n�����ĺ�
*/

#include <iostream>
using namespace std;

int main() {
    int t, n, x, sum;
    cin >> t;
    while(t--) {
        sum = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}
