#include <iostream>

using namespace std;

int main(){
	const int min {10};
	const int max {100};
	int num {0};
	
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Enter a number" << endl;
	cin >> num;
	
	if (num >= min){
		cout << num << " greater than " << min << endl;
		int diff {num - min};
		cout << "Difference is " << diff << endl;
	}
	
	if (num <= max){
		cout << num << " less than " << max << endl;
		int diff {num - max};
		cout << "Difference is " << diff << endl;
	}
	
	if (num >= min && num <= max){
		cout << num << " between " << min << " and " << max << endl;
	}
	
	return 0;
}