/*
HDOJ 2096 С��A+B
https://acm.hdu.edu.cn/showproblem.php?pid=2096

���룺������һ��t��Ȼ��t�����ݣ�ÿ����������a��b��
�������� t �У�ÿһ�д��� a �� b �ĺͣ�����ģ��100��
*/

#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int c = (a % 100 + b % 100) % 100;
        cout << c << endl;
    }
    return 0;
}
