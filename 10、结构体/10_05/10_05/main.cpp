#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point pt;
    double radius;
};

void printCircle(const Circle *c) {
    // c->pt.x += 1; 常量不可修改
    cout << "(" << c->pt.x << "," << c->pt.y << ") " << c->radius << endl;
}

void moveCircle(Circle *c, int x, int y) {
    //cout << &c << endl;
    c->pt.x += x;
    c->pt.y += y;
}

int main() {
    Circle c = { {9,8}, 5 };
    //cout << &c << endl;
    moveCircle(&c, 1, -2);
    printCircle(&c);
    return 0;
}