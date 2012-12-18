// templates!
// like the Java generics, I think, with T
// the compiler (pre-processor?) takes care of this for us and
// generates all the versions of the function that we need

using namespace std;

#include <iostream>

template <class ttype>
ttype minimum(ttype a, ttype b) {
	ttype ans;

	ans = a;
	if (b < a) {
		ans = b;
	}

	return ans;
}

int main() {
	int i1, i2, i3;
	i1 = 2;
	i2 = -3;
	
	cout << "So we have this pretty strange syntactical template definition,"
			 << " but now I can do minimum(a, b) for ints, doubles, etc\n";

	cout << "minimum(a, b) where a = 2 and b = -3 gives:\n  "
			 << minimum(i1, i2) << endl
			 << "similarly, minimum(a, b) where a = 34.4 and b = -23.4 gives:\n  "
			 << minimum(34.4, -23.4) << endl;

	cout << "\nCool, but we can't do minimum(int, float)- not yet.\n"
			 << "For that we need something like\n"
			 << "\"template <class type1, class type2>\n"
			 << "type1 minimum(type1 a, type2 b)\"\n"
			 << "but even then it's non-commutative. It's interesting.\n"
			 << "Definitely has limitations, but much much more generic than C\n";
	
	return 0;
}
