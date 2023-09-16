#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double num{};
	cout << "Enter a number: ";
	cin >> num;
	double res{};
	
	cout << sqrt(num) << endl;
	cout << cbrt(num) << endl;
	cout << sin(num) << endl;
	cout << cos(num) << endl;
	cout << ceil(num) << endl;
	cout << floor(num) << endl;
	cout << round(num) << endl;
	cout << pow(num, 8) << endl;
	
	return 0;
}
