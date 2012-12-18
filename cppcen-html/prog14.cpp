// a truly new concept - operator overloading
// you can change the meaning of operators
// like *, +, <<, >>, ++, +=, []
// as they affect certain structs
// the '<<' in particular is very cool

using namespace std;

#include <iostream>

struct simple_array {
	double x;
	double y;
};

simple_array operator * (double scale_by, simple_array to_change) {
	simple_array temp;

	temp.x = scale_by * to_change.x;
	temp.y = scale_by * to_change.y;

	return temp;
}

ostream& operator << (ostream& out, simple_array to_display) {
	out << "{" << to_display.x << ", " << to_display.y << "}";

	return out;
}

int main() {
	simple_array k, m;

	k.x = 2;
	k.y = -1;

	cout << "So I made 2 'simple_array's.\n"
			 << "The first is initialized to {2, -1}, and the second"
			 << " is 5 * the first.\n";

	m = 5 * k;

	cout << "So now the first is {" << k.x << ", " << k.y << "}\n"
			 << "and the second is {" << m.x << ", " << m.y << "}\n";

	cout << "\nImportantly, this is not a commutative operator;\n"
			 << "double * simple_array is defined, but not vice versa.\n";

	cout << "One more cool trick - if you define:\n"
			 << "\"ostream& operator << (ostream& out, TYPE name)\"\n"
			 << "Then you can do this:\n"
			 << "\"simple_array k = \" << k << endl\"\n"
			 << "like so:\n"
			 << "simple_array k = " << k 
			 << "\nThat right there is nifty.\n"; 

	return 0;
}