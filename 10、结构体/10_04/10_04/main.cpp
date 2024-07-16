#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point pt;
    double radius;
};

struct Circles {
    int size;
    Circle c[100];
};


int main() {
    Circle c;
    c.pt.x = 9;
    c.pt.y = 8;
    c.radius = 5;

    Circles cs = {
        2, {
            { {9,8}, 5 },
            { {2,1}, 1 }
        }
    };
    for (int i = 0; i < cs.size; ++i) {
        Circle tmp = cs.c[i];
        cout << "(" << tmp.pt.x << "," << tmp.pt.y << ") " << tmp.radius << endl;
    }

    return 0;
}