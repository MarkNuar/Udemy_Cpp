#include <iostream>

using namespace std;

int main(){
	
	int total {};
	int n1 {}, n2 {}, n3 {};
	const int count {3};
	
	cout << "Type 3 integers separated by spaces " << endl;
	cin >> n1 >> n2 >> n3;
	total = n1 + n2 + n3;
	
	double avg {};
	avg = static_cast<double>(total)/count;
	cout << "-----------------------------" << endl;
	cout << "Average is: " << avg << endl;
	
	return 0;
}