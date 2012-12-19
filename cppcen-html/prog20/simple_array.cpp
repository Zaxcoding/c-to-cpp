// first program with headers and linking

using namespace std;

#include <iostream>
#include "simple_array.h"

void simple_array::set_x(double a) {
	x = a;
}

void simple_array::set_y(double b) {
	y = b;
}

void simple_array::print_string() {
	cout << "{" << x << ", " << y << "}";
}
