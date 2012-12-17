// copying this straight from the source
// to see what I get
// Exceptions! try/catch

using namespace std;

#include <iostream>
#include <cmath>

int main() {
	int a;

	cout << "Gimme an int, please: ";
	cin >> a;
	cout << "\nOkay, here comes the try/catch.\n";

	try {
		if (a > 100) { 
			throw 100;
		}
		if (a < 10) {
			throw 10;
		}
		throw a / 3;
	}
	catch (int result) {
		cout << "So I'm in the catch, and 'result' = " << result << endl;
	}

	cout << "It's pretty nifty. Throw your own exceptions, of any type.\n";
	cout << "\nHere's another example:\n";
	cout << "One more int, please: ";

	cin >> a;

	cout << "Thank you very much.\n";

	char zero[] = "zero.";
	char non_zero[] = "non-zero.";
	
	try {
		if (a == 0) {
			throw zero;
		}
		throw non_zero;
	}
	catch (char *string) {
		cout << "I'm supposed to tell you " << string << endl;
	}

	return 0;
}