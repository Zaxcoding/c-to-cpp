// first program with linking and headers

using namespace std;

#include <iostream>
#include "simple_array.h"

int main() {
	simple_array k;

	k.set_x(4);
	k.set_y(4);

	cout << "So I hope you compiled this guy with \"make\".\n"
			 << "I already called some set_x and set_y methods,"
			 << " and now I'll call k.print_string().\n";


	k.print_string();

	cout << "\nThat easy. With headers, seperate class file and all.\n";

	return 0;
}
