// first use of my own namespaces

using namespace std;

#include <iostream>
#include <cmath>

namespace first {
	int a;
	int b;
}

namespace second {
	double a;
	double b;
}

int main() {
	cout << "Okay, so I made two namespaces. I'm about to assign some"
						<< " variables in the 'first' namespace by using:\n"
						<< "  first::a = 2\n  first::b = 5\n";

	first::a = 2;
	first::b = 5;

	cout << "Next, I'll do the same for 'second' namespace.\n"
			 << "  second::a = -1.4;\n  second::b = -345.43;\n";

	second::a = -1.4;
	second::b = -345.43;

	cout << "So:\nfirst::a = " << first::a
			 << "\tsecond::a = " << second::a << endl
			 << "first:: b = " << first::b 
			 << "\tsecond::b = " << second::b << endl;

	cout << "Straightforward, and pretty cool.\n";

	return 0;
}
