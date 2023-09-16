#include <iostream>

using namespace std;

int main(){
	
	cout << "Enter room width: ";
	int room_width {0};
	cin >> room_width;
	
	cout << "Enter room length: ";
	int room_length {0};
	cin >> room_length;
	
	cout << "Room area is " << room_length * room_width << " square meters" << endl;
	return 0;
}