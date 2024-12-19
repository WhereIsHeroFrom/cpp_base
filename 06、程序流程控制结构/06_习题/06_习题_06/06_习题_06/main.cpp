/*
HDOJ 1093 A+B for Input-Output Practice (V)
https://acm.hdu.edu.cn/showproblem.php?pid=1093

输入：输入一个t，代表有t组数据，每组数据输入一个 n，然后n个数；
输出：对于t组数据，输出这n个数的和
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
