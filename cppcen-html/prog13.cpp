// function overloading
// same name - different signature

using namespace std;

#include <iostream>

double test(double a, double b) {

	return a + b;
}

int test(int a, int b) {

	return a - b;
}

int main() {
	double x1 = 2, x2 = 3;
	int y1 = 2, y2 = 3;

	cout << "So I've declared two sets of variables:\n"
			 << "x1 and x2 are doubles, with value 2 and 3\n"
			 << "y1 and y2 are ints, with value 2 and 3 also\n"
			 << "but check this out:\n"
			 << "test(x1, x2) = " << test(x1, x2) << endl
			 << "test(y1, y2) = " << test(y1, y2) << endl;

	cout << "So same name can do different things based on signature.\n";

	return 0;
}
