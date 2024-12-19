#include <iostream>
#include <vector>
using namespace std;

struct S {
    int a, b, c, d, e, f;
};

void printS(const S& s) {
    // s.b = 520;
    cout << s.a << s.b << s.c << s.d << s.e << s.f << endl;
}

int main() {
    int a;
    const int& b = a;
    // 引用 = 指针常量
    // 常量引用 = 常量指针常量
    S s = { 1,2,3,4,5,6 };
    printS(s);

    vector<int> a;

    return 0;
}