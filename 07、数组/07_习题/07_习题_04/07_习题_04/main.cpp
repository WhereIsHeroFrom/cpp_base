/*
HDOJ 2023 ��ƽ���ɼ�
https://acm.hdu.edu.cn/showproblem.php?pid=2023


����һ������n(n<=50)��ѧ����ÿ�˿�m(m<=5)�ſΣ���ÿ��ѧ����ƽ���ɼ���ÿ�ſε�ƽ���ɼ�����������Ƴɼ������ڵ���ƽ���ɼ���ѧ��������

���룺�������� n �� m���ֱ��ʾѧ�����Ϳγ�����Ȼ����n�����ݣ�ÿ�а���m��������
���������ÿ������ʵ�������3�����ݣ�
��һ�а���n�����ݣ���ʾn��ѧ����ƽ���ɼ������������λС����
�ڶ��а���m�����ݣ���ʾm�ſε�ƽ���ɼ������������λС����
��������һ����������ʾ�ð༶�и��Ƴɼ������ڵ���ƽ���ɼ���ѧ��������
ÿ������ʵ�������һ�����С�

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
