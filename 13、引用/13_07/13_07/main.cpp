#include <iostream>
using namespace std;

// *&

void allocMemory1(char *ptr, int bytes) {
    ptr = new char[bytes];
    cout << "ptr 的地址：" << &ptr << endl;
}

void test1() {
    char* p = NULL;
    allocMemory1(p, 5);
    cout << (void*)p << endl;
    cout << "  p 的地址：" << &p << endl;
}

void allocMemory2(char*& ptr, int bytes) {
    ptr = new char[bytes];
    cout << "ptr 的地址：" << &ptr << endl;
}

void test2() {
    char* p = NULL;
    allocMemory2(p, 5);
    cout << (void*)p << endl;
    cout << "  p 的地址：" << &p << endl;
}

int main() {
    //test1();
    test2();
    return 0;
}