// default parameters for functions!

using namespace std;

#include <iostream>

double default_test(char string[] = "Interesting.") {
	cout << "I'm in default_test, and I was given: " << string << endl;
}

int main() {
	cout << "So I'm going to call default_test twice.\n"
			 << "First: default_test(\"Passing some text\"):\n";

	default_test("Passing some text");

	cout << "Next: default_test():\n";
	default_test();

	return 0;
}
