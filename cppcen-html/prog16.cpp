// forget about malloc and free-
// time for 'new' and 'delete'!

using namespace std;

#include <iostream>

int main() {
	double *d;				// stack-create a pointer

	d = new double;		// then allocate space for d to point to

	*d = 45.3;				// then put 45.3 into the space

	cout << "Okay so I made \"double *d\", a pointer.\n"
			 << "Then I did \"d = new double;\", to make space.\n"
			 << "And now I'm going to ask for a double from you, to put there.\n"
			 << "So.. about that double: ";

	cin >> *d;

	cout << "So I took what you gave me and did:\n  \"cin >> *d\"\n";

	delete d;

	cout << "And then I deleted it. Hah! All your hard work, gone.\n";

	d = new double[15];

	for (int i = 0; i < 15; i++) {
		d[i] = i % 7;
	}

	cout << "\nNow I did \"d = new double[15];\" to make an array.\n"
			 << "And to delete, I should do \"delete [] d\", which will"
			 << " call the destructor on each of the elements of the array-"
			 << " crucial for when we're working with classes, but also just to"
			 << " avoid memory leaks in general, since \"delete d\" won't cut it\n";

	cout << "\nOne cool trick is that you can 'new' (malloc)" 
			 <<	" based on user input.\n(play along and give me an int): ";

	int test;
	cin >> test;

	delete [] d;

	d = new double[test];

	cout << "\nIf you're seeing this, then it worked. And you are!\n"
			 << "One last cool side-note. If you didn't give an int before,"
			 << " it's not necessarily an issue, because C++ will try to convert.\n"
			 << "So for example, your input was taken in as \"" << test << "\"\n";

	delete [] d;

	cout << "\nBut you can still break it by giving a negative number,"
			 << " as one can't allocate a negative amount of space.\n";

	return 0;
}