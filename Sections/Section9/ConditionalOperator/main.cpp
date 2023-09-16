#include <iostream>

using namespace std;

int main(){
	
	int num {};
	
	cout << "Put an int" << endl;
	cin >> num;
	
	cout << "Num is " << ((num%2==0)? "Even" : "Odd") << endl;
	
	
	cout << "Enter 2 integers" << endl;
	int num1 {}, num2 {};
	cin >> num1 >> num2;
	
	if (num1 == num2)
	{
		cout << "The numbers are the same" << endl;
	}
	else
	{
		cout << "Largest: " << ((num1>num2)? num1 : num2) << endl;
		cout << "Smallest: " << ((num1<num2)? num1 : num2) << endl;
	}
	
	return 0;
}