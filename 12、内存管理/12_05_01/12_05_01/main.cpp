// new ºÍ delete

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int(1314);
    *ptr = 520;
    cout << *ptr << endl;

    delete ptr;
    ptr = NULL;
    return 0;
}