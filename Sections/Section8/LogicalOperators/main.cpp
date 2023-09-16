#include <iostream>

using namespace std;

int main(){
	cout << boolalpha;
	
	const int lower {10};
	const int upper {20};
	int num {};
	
	cout << "Enter an integer between " << lower << " and " << upper << endl;
	cin >> num;
	
	bool within_bounds {false};
	within_bounds = num > lower && num < upper;
	cout << "Is withing bounds? " << within_bounds << endl;
	
	bool outside_bounds {false};
	outside_bounds = num < lower || num > upper;
	cout << "Is outside bounds? " << outside_bounds << endl;
	
	bool on_the_bounds {false};
	on_the_bounds = num == lower || num == upper;
	cout << "Is on the bounds? " << on_the_bounds << endl;
	
	return 0;
}