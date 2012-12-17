// an interesting pointer-like C++ feature

using namespace std;

#include <iostream>

void change(double &a, double b) {
	a = 100;
	b = 200;
}

int main() {
	double a, b;

	a = 3;
	b = 4;

	cout << "So right now, a = " << a << " and b = " << b << endl;

	cout << "Now I'm about to call this function, C++ style:\n";
	cout << "change(double &a, double b) {\n  a = 100;\n  b = 200;\n}\n";
	cout << "And call it through change(a, b);\n";

	change(a, b);

	cout << "So let's see what happened:\n";
	cout << "a = " << a << " and b = " << b << endl;

	cout << "\nSo this is like how we would do, in C:\n";
	cout << "change(double *a, double b) {\n  *a = 100;\n  b = 200;\n}\n";
	cout << "and call it through change(&a, b);\n";

	return 0;
}
