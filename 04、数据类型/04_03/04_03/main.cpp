#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*
float     4×Ö½Ú 0000
double    8×Ö½Ú 0000

*/

#define eps 1e-7

int main() {
	float a = 13.1415926f;
	double b = 13.141592611111111111111111111111111111111111;
	double c = 1.5e5;  // 1.5 x 100000
	double d = 1.5e-5;  // 1.5 x 10-5
	cout << setprecision(10) << a << endl;
	cout << setprecision(18) << b << endl;
	cout << c << endl;
	cout << d << endl;
	double x = 1.0 / 234324247 * 234324247;
	if ( fabs(x - 1) < eps ) {
		cout << "hhh" << endl;
	}
	cout << x << endl;

	return 0;
}