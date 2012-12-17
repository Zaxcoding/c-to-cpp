// very, very welcome c++ feature-
// variable declarations in a for loop!

using namespace std;

#include <iostream>

int main() {
	int i;
	i = 487;

	cout << "Okay so here's the deal.\n";
	cout << "I declared a variable 'i', and initialized it to 487.\n";
	cout << "(see: i = " << i << ")\n";

	cout << "Now I'm about to do a for loop, with a variable 'i' local to it.\n";

	for (int i = 0; i < 4; i++) {
		cout << "Inside the for loop, and i = " << i << endl;
	}

	cout << "Here's the awesome part. Watch this.\n";
	cout << "i = " << i << endl;

	cout << "Come on. How cool is that?!\n";

	return 0;
}
