#include <iostream>
#include <typeinfo>
using namespace std;


class student{
private:
	int ID;
	int grade;
};

int main(void){
	auto num = 2.5 + 1; 					// double
	cout << typeid(num).name() << endl;
	auto name = "Hetav"; 					// PKc or String
	cout << typeid(name).name() << endl;
	auto num1 = 1; 							// i
	cout << typeid(num1).name() << endl;
	auto num2 = 2.5; 					    // double
	cout << typeid(num2).name() << endl;
	auto surname = name; 					// PKc or String
	cout << typeid(surname).name() << endl;

	/* ERROR CODE BELOW */
	// auto integer;
	// integer = 23;
	/////////////////////

	student object;
	auto var = object;
	cout << endl << typeid(var).name() << endl;
	return 0;
}
