#include <iostream>

using namespace std;

int main(){
	cout << "My Template" << endl;
	cout << "My test with n \n";

	// cin and cout can be chained
	// cin can fail if the entered data cannot be parsed to 
	// the variable type
	
	int num1, num2;
	double num3;
	
	cout << "Input an integer number" << endl;
	cin >> num1;
	cout << "You entered " << num1 << endl;
	
	// enter 2 integers 
	cout << "Enter 2 numbers" << endl;
	cin >> num1 >> num2;
	cout << num1 << " " << num2 << endl;
	
	// decimal value
	cout << "Enter a decimal value" << endl;
	cin >> num3;
	cout << num3 << endl;
	return 0;
}