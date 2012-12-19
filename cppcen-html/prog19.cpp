// 'copy constructor', and overloading the = operator
// I don't understand the point of the 'copy constructor'
// so I'm going to copy this program exactly and see
// what the issue is if I remove it

using namespace std;

#include <iostream>
#include <cstring>

class person {
public:
	
	person(char *_name = (char *)"Anonymous", int _age = 0) {
		name = new char[strlen(_name)];
		strcpy(name, _name);
		age = _age;
	}

	~person () {
		delete [] name;
	}

	// this is the copy constructor
	person(const person &s) {
		name = new char[strlen(name)];
		strcpy(name, s.get_name());
		age = s.get_age();
	}

	person &operator =(const person &s) {
		strcpy(name, s.get_name());
		age = s.get_age();

		return *this;
	}

	char *get_name() const {
		char * temp = new char[strlen(name)];
		strcpy(temp, name);

		return temp;
	}

	int get_age() const {

		return age;
	}

private:
	char *name;
	int age;
};


int main() {
	person bob;

	cout << "So this is " << bob.get_name() << ", age " << bob.get_age();

	person john((char *)"John", 56);
	cout << "\nAnd this is " << john.get_name() << ", age " << john.get_age();

	john = bob;
	cout << "\nAnd this is " << john.get_name() << ", age " << john.get_age();

	john = person((char *)"Bob", 10);
	cout << "\nAnd this is " << john.get_name() << ", age " << john.get_age();

	cout << "\nSo I think the point of the copy constructor is to let you"
			 << " do stuff like \n  p = person(\"Bob\", 10)  \n"
			 << "at least I think so, for now. I might be wrong.\n"
			 << "Another interesting thing I learned is that string constants"
			 << " are type \"string\", not char * like in C.\n";

	cout << "One last thing I learned- do accessors like this:\n"
			 << "  int get_age() const {\n\n  return age;\n}\n"
			 << "The \"const\" is the key there.\n";

	return 0;
}
