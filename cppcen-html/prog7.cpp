// a pretty neat trick to differentiate between 
// local and global variables that share the same name
// it's an awful idea, and you should just use two names,
// but still kinda cool to know.

using namespace std;

#include <iostream>

double a = 128;

int main() {
	cout << "I already declared a global variable.\n";
	cout << "See: a = " << a << endl;

	cout << "\nAnd now I'm about to declare a local variable "
 						<< "with the same name.\n";
	double a = 256;

	cout << "So now I can show you the first, global one by doing this:\n";
	cout << "'::a' = " << ::a << endl;
	cout << "And the second, local one by doing this:\n";
	cout << "'a' = " << a << endl;

	cout << "\nInteresting, but probably an awful idea.\n";

	return 0;
}
