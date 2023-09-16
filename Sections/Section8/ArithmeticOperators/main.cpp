#include <iostream>

using namespace std;

int main(){
	int num1 {100};
	int num2 {200};
	
	//int result = num1 + num2;
	int result {0};
	
	result = num1 + num2;
	cout << result << endl;
	
	result = num1 / num2;
	cout << result << endl;
	
	float f_result = (float)num1 / num2;
	cout << f_result << endl;
	
	return 0;
}