// checking float -> integer division

using namespace std;

#include <iostream>

int main() {
	double a;

	a = 456.47;
	a = a + a * 21.5 / 100;

	cout << "456.47 * 2 * 21.5 / 100 = " << a << endl;
	cout << "So float/int yields float!\n";

	return 0;
}
