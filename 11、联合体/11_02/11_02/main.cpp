#include <iostream>
using namespace std;

union DataU {
    int i;      // 4
    double d;   // 8
    char s[7];  // 7
};

int main() {
    cout << sizeof(DataU) << endl;
    DataU du;
    du.s[0] = 255;      // 11111111
    du.s[1] = 1;        // 00000001
    du.s[2] = 0;        // 00000000
    du.s[3] = 0;        // 00000000
    cout << du.i << endl; // 00000000 00000000 00000001 11111111
    du.i = 256;
    cout << (int)du.s[0] << (int)du.s[1] << (int)du.s[2] << (int)du.s[3] << endl;

    return 0;
}