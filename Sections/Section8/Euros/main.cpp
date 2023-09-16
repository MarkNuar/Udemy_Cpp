#include <iostream>

using namespace std;

// Convert euros to us dollars
int main(){
	
	const double usd_per_eur {1.19};

	cout << "Welcome to EUR to USD converter;" << endl;
	cout << "Enter value in EUR: ";
	double eur {0};
	cin >> eur;
	double usd {0};
	usd = eur * usd_per_eur;
	cout << "Value in USD: " << usd << endl;
	cout << "Bye!" << endl;

	return 0;
}