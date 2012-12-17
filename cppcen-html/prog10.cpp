// inline functions - similar to macros
// in that they're preprocessor directives
// but don't worry about all the () needed for macros

using namespace std;

#include <iostream>

inline double max(double a, double b) {
	return (a > b) ? a : b;
}

int main() {
	double a = 500, b = 501;

	cout << "About to use some inline functions! (think macros)\n";
	
	cout << "So max(500, 501) is " << max(a, b) << endl;
	cout << "And max (-134, -234) is " << max(-134, -234) << endl;

	cout << "We did it! And with the question mark colon operator too!\n";
	return 0;
}
