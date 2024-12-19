/*
HDOJ 2012 素数判定
https://acm.hdu.edu.cn/showproblem.php?pid=2012

对于表达式n^2+n+41
当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)
判定该表达式的值是否都为素数

输入：反复输入 x 和 y，当 x 和 y 都为 0 的时候，程序结束
输出：如果满足都是素数，则输出 OK，否则输出 Sorry

*/

#include <iostream>
using namespace std;

//
//   x   有一个因子叫 i，那么必然有另一个因子叫 x/i
//    i 和 x/i 必然有个大小关系，无论大小关系怎样，都能推导出 i <= 根号x
bool isPrime(int x) {
    for (int i = 2; i*i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int x, y;
    while (cin >> x >> y) {
        if (!x && !y) {
            break;
        }
        bool flag = false;
        for (int i = x; i <= y; ++i) {
            int z = i * i + i + 41;
            if (!isPrime(z)) {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            cout << "OK" << endl;
        }
        else {
            cout << "Sorry" << endl;
        }
    }
    return 0;
}
