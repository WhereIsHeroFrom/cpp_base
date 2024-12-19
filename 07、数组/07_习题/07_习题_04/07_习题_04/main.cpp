/*
HDOJ 2023 求平均成绩
https://acm.hdu.edu.cn/showproblem.php?pid=2023


假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。

输入：反复输入 n 和 m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数。
输出：对于每个测试实例，输出3行数据：
第一行包含n个数据，表示n个学生的平均成绩，结果保留两位小数；
第二行包含m个数据，表示m门课的平均成绩，结果保留两位小数；
第三行是一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
每个测试实例后面跟一个空行。

3 2
1 2
3 4
6 8

1.50 3.50 7.00
3.33 4.67
1

7 5
1 2 3 4 5
5 4 3 2 1
6 5 4 3 2
2 3 4 5 6
9 9 9 9 9
8 8 8 8 8
7 7 7 7 7


*/

#include <iostream>
using namespace std;

double a[51][6];
double sa[51];
double ca[6];

int main() {
    int n, m;
    while (cin >> n >> m) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            sa[i] = 0;
            for (int j = 0; j < m; ++j) {
                sa[i] += a[i][j];
            }
            sa[i] /= m;
        }
        for (int i = 0; i < m; ++i) {
            ca[i] = 0;
            for (int j = 0; j < n; ++j) {
                ca[i] += a[j][i];
            }
            ca[i] /= n;
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            for (int j = 0; j < m; ++j) {
                sum += (a[i][j] >= ca[j]);
            }
            if (sum == m) {
                ++cnt;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (i) {
                cout << ' ';
            }
            printf("%.2lf", sa[i]);
        }
        cout << endl;
        for (int i = 0; i < m; ++i) {
            if (i) {
                cout << ' ';
            }
            printf("%.2lf", ca[i]);
        }
        cout << endl;
        cout << cnt << endl;
    }
    return 0;
}
