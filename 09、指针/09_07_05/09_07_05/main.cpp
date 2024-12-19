#include <iostream>
using namespace std;

// 函数指针数组
// [函数指针1, 函数指针2, ... ]

typedef void (*fptr) (int a, int b, double c, float d, char e);
typedef void (*fptrs[56]) (int a, int b, double c, float d, char e);

void func1(int a, int b, double c, float d, char e) {
    cout << "func1" << endl;
}
void func2(int a, int b, double c, float d, char e) {
    cout << "func2" << endl;
}
void func3(int a, int b, double c, float d, char e) {
    cout << "func3" << endl;
}


int main() {
    //int  a[]= {1 ,2, 3 };
    fptrs fps = {func1, func2, func3};
    cout << fps[0] << endl;
    cout << fps[1] << endl;
    cout << fps[2] << endl;
    cout << fps[3] << endl;

    fptr fp[] = { func1, func2, func3 };
    cout << fp[0] << endl;
    cout << fp[1] << endl;
    cout << fp[2] << endl;

    return 0;
}