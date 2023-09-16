#include <iostream>

using namespace std;

int main(){
	int num1 {10}; // this is initialization, not assignment! 
	int num2 {20};
	
	num1 = 100;
	// chained assignment 
	num1 = num2 = 1000;
	
	//num1 = "Frank"; // error at compile time 
	num1 = 'a'; // valid conversion, get ascii value 
	
	cout << "Num 1 " << num1 << endl;
	cout << "Num 2 " << num2 << endl;
	
	return 0;
}