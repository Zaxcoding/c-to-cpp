// my first C++ class
// aww.. soo cute

using namespace std;

#include <iostream>

class simple_array {
public:

	double multiply_stuff() {
		double s;
		x = 2;
		y = 5;
		s = x * y + 3.5;
		return s;
	}

private:

	int x, y;
	/* data */
};

int main() {
	simple_array a;

	cout << "The surface of a is " << a.multiply_stuff() << endl;

	return 0;
}
