#include <iostream>

using namespace std;

int main(){
	//cout << noboolalpha; // uncomment if you want 0, 1 
	cout << boolalpha; // uncomment if you want false, true 
	
	bool equal_result {false};
	bool not_equal_result {false};
	
//	int num1{}, num2{};
//	cout << "Enter 2 integers" << endl;
//	cin >> num1 >> num2;
//	cout << "Equals: " << (num1 == num2) << endl;
//	cout << "Not Equals: " << (num1 != num2) << endl;
	
//	char char1{}, char2{};
//	cout << "Enter 2 characters" << endl;
//	cin >> char1 >> char2;
//	cout << "Equals: " << (char1 == char2) << endl;
//	cout << "Not Equals: " << (char1 != char2) << endl; 
	
	
//	float num1{}, num2{};
//	cout << "Enter 2 float" << endl;
//	cin >> num1 >> num2;
//	cout << "Equals: " << (num1 == num2) << endl;
//	cout << "Not Equals: " << (num1 != num2) << endl;
	
	int num1{};
	float num2{};
	cout << "Enter an intger and a float" << endl;
	cin >> num1 >> num2;
	cout << "Equals: " << (num1 == num2) << endl;
	cout << "Not Equals: " << (num1 != num2) << endl;
	
	return 0;
}