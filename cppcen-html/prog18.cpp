// example of a bounds-checked
// array class, using [] operator
// constructor, destructor, and more

using namespace std;

#include <iostream>

class simple_array {
public:
	int size;

	simple_array(int s) {
		size = s;
		data = new double[size];
	}

	~simple_array() {
		delete [] data;
	}

	double &operator [] (int index) {
		if (index < 0 || index > size) {
			cerr << "\nAw man, issue here- you went out of bounds.\n"
					 << "I'm just gonna give you the last position.\n";
			return data[size-1];
		}
		return data[index];
	}

private:
	double *data;
};


int main() {
	simple_array mine(5);
	double *theirs = new double[5];

	for (int i = 0; i < 5; i++) {
		mine[i] = i;
		theirs[i] = i;
	}

	cout << "So mine is ";
	for (int i = 0; i < 10; i++) {
		cout << "\nPos " << i << ": " << mine[i];
	}

	cout << "\nI couldn't get the \"ostream &operator <<\"\n"
			 << "to work this time, but I'll try again later.\n";

	return 0;
}
