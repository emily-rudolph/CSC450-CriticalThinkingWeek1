//============================================================================
// Name        : Critical.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person {
	public:
		string firstName;
		string lastName;
		string streetAddress;
		string city;
		int zipCode;
};

int main() {

	Person person;
	person.firstName = "Rachel";
	person.lastName = "Smith";
	person.streetAddress = "123 Example Street";
	person.city = "Atlantis";
	person.zipCode = 9999;

	cout << person.firstName << "\n" << person.lastName << "\n" << person.streetAddress << "\n" << person.city << "\n" << person.zipCode;

	return 0;
}
