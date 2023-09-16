#include <iostream>

using namespace std;

int num {100}; // Global Variable 

int main()
{
	
	int num{100}; // Local to main 
	int num1{231};
	
	{
		int num{213} // local to this block
		cout << num << endl; // OUTPUTS 213
		cout << num1 << endl; // OUTPUTS 231
		// blocks creates levels of scope. 
	}
	
	cout << num << endl; // OUTPUTS 100 
	
	return 0;
}
