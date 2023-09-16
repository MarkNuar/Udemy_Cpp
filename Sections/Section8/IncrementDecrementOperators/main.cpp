#include <iostream>

using namespace std;

int main(){
	
	int num {10};
	int res {0};
	
	res = ++num;
	cout << "Res " << res << endl;
	cout << "Num " << num << endl;
	
	// reset values
	num = 10;
	res = 0;
	
	res = num++;
	cout << "Res " << res << endl;
	cout << "Num " << num << endl;
	
	// reset values
	num = 10;
	res = 0;
	
	res = ++num + 10;
	cout << "Res " << res << endl;
	cout << "Num " << num << endl;
	
	// reset values
	num = 10;
	res = 0;
	
	res = num++ + 10;
	cout << "Res " << res << endl;
	cout << "Num " << num << endl;
	
	return 0;
}