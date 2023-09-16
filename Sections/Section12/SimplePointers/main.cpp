#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int num {10};
	cout << "Value: " << num << endl;
	cout << "Sizeof: " << sizeof(num) << endl;
	cout << "Address: " << &num << endl << endl;
	
	int* p;
	cout << "Value: " << p << endl;
	cout << "Sizeof: " << sizeof(p) << endl;
	cout << "Address: " << &p << endl << endl;
	
	p = nullptr;
	cout << "Value: " << p << endl;
	cout << "Sizeof: " << sizeof(p) << endl;
	cout << "Address: " << &p << endl << endl;
	
	p = &num;
	cout << "Value: " << p << endl;
	cout << "Sizeof: " << sizeof(p) << endl;
	cout << "Address: " << &p << endl << endl;
	
	
	int* p1 {nullptr};
	double* p2 {nullptr};
	unsigned long long* p3 {nullptr};
	vector<string>* p4 {nullptr};
	string* p5 {nullptr};
	
	cout << "Sizeof: " << sizeof(p1) << endl;
	cout << "Sizeof: " << sizeof(p2) << endl;
	cout << "Sizeof: " << sizeof(p3) << endl;
	cout << "Sizeof: " << sizeof(p4) << endl;
	cout << "Sizeof: " << sizeof(p5) << endl << endl;
	
	
	int score{10};
	double high_temp{100.7};
	int* score_ptr {nullptr};
	
	score_ptr = &score;
	cout << "Value of score: " << score << endl;
	cout << "Address of score is: " << &score << endl;
	cout << "Value of score_ptr: " << score_ptr << endl << endl;
	
//	score_ptr = &high_temp; // ERROR
//	cout << "Value: " << p << endl;
//	cout << "Sizeof: " << sizeof(p) << endl;
//	cout << "Address: " << &p << endl << endl;
	
	return 0;
}
