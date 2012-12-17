// variable declarations wherever- take that C

using namespace std;

#include <iostream>

int main() {
	double a;

	cout << "So I declared 'a' before writing this.\n";
	cout << "Now give me a value for a: ";

	cin >> a;

	double c = 5;

	cout << "WHOA! Hold on! We just declared 'c'. Can we use it?\n";
	cout << "Let's try. a = " << a << ", so give me a value for c: ";

	cin >> c;

	cout << "... and the verdict is?? c = " << c << endl;

	cout << "Take that Misurda! We can declare variables wherever!!\n";
	cout << "C++ is the BEST!!!\n";

	return 0;
}