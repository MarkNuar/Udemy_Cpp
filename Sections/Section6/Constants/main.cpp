#include <iostream>

using namespace std;

int main(){
	
	cout << "Hello" << endl;
	cout << endl << "How many rooms?" << endl;
	
	int number_of_rooms {0};
	cin >> number_of_rooms;
	
	const double price_per_room {30};
	const float tax_rate {.06};
	const int number_of_days {30};
	
	cout << endl << "Prices estimated: " << endl;
	cout << "N. of rooms: " << number_of_rooms << endl;
	cout << "Price per room: " << price_per_room << endl;
	cout << "Cost: $" << price_per_room * number_of_rooms << endl;
	cout << "Tax: $" << price_per_room * number_of_rooms * tax_rate << endl;
	cout << "============================" << endl;
	cout << "Total estimate: $" << price_per_room * number_of_rooms * (1 + tax_rate) << endl;
	cout << "This estimate is valid for " << number_of_days << " days" << endl;
	cout << endl;

	return 0;
}