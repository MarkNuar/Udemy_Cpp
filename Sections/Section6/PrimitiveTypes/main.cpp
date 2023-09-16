#include <iostream>

using namespace std;

int main(){
	
	// Character type 
	char middle_initial {'J'};
	
	// Unsigned short int
	unsigned short int exam_score {55};
	
	int countries_represented {65};
	
	//long people_in_florida {20610000};
	//cout << people_in_florida << endl;
	
	long long people_on_earth {7'600'000'000};
	cout << people_on_earth << endl;
	
	// {} initialization catch overflow problems at compile time 
	
	long people_on_earth1 = 7600000000; // overflow
	cout << people_on_earth1 << endl;

	float car_payment {401.23};
	double pi {3.14159};
	long double val {2.7e20};
	
	bool game_over {false}; // converted to 0
	bool game_over1 {1};
	bool game_over2 {0};
	bool game_over3 {true}; // converted to 1 

	return 0;
}