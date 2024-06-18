/*
HDOJ 2056 Rectangles
https://acm.hdu.edu.cn/showproblem.php?pid=2056


*/

#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

struct Rect {
    Point lt;
    Point rd;
};

Rect tmp1, tmp2;
Rect r1, r2;

double Max(double a, double b) {
    return a > b ? a : b;
}
double Min(double a, double b) {
    return a < b ? a : b;
}

int main() {
    while (cin >> tmp1.lt.x >> tmp1.lt.y >> tmp1.rd.x >> tmp1.rd.y) {
        cin >> tmp2.lt.x >> tmp2.lt.y >> tmp2.rd.x >> tmp2.rd.y;

        r1.lt.x = Min(tmp1.lt.x, tmp1.rd.x);
        r1.lt.y = Min(tmp1.lt.y, tmp1.rd.y);
        r1.rd.x = Max(tmp1.lt.x, tmp1.rd.x);
        r1.rd.y = Max(tmp1.lt.y, tmp1.rd.y);

        r2.lt.x = Min(tmp2.lt.x, tmp2.rd.x);
        r2.lt.y = Min(tmp2.lt.y, tmp2.rd.y);
        r2.rd.x = Max(tmp2.lt.x, tmp2.rd.x);
        r2.rd.y = Max(tmp2.lt.y, tmp2.rd.y);

        double maxx = Max(r1.lt.x, r2.lt.x);
        double minx = Min(r1.rd.x, r2.rd.x);
        double maxy = Max(r1.lt.y, r2.lt.y);
        double miny = Min(r1.rd.y, r2.rd.y);
        double ans = (minx - maxx) * (miny - maxy);
        if (minx < maxx) ans = 0;
        if (miny < maxy) ans = 0;
        printf("%.2lf\n", ans);
    }
    return 0;
}
