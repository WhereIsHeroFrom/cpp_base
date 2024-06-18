/*
HDOJ 2055 An easy problem
https://acm.hdu.edu.cn/showproblem.php?pid=2055

���� f(A) = 1, f(a) = -1, f(B) = 2, f(b) = -2, ... f(Z) = 26, f(z) = -26;
���룺����һ��t������t�����ݣ�ÿ�����������ַ� x ������ y
���������ÿ�����ݣ���� y+f(x) ��ֵ
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[3];
        char x;
        int y;
        int ans = 0;
        cin >> s;
        x = s[0];
        cin >> y;
        // y + f(x)
        if (x >= 'A' && x <= 'Z') {
            ans = y + (x - 'A' + 1);
        }
        else if (x >= 'a' && x <= 'z') {
            ans = y - (x - 'a' + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
