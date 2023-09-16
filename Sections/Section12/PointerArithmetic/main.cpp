#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int scores[] {100, 95, 98, -1};
	int* score_ptr {scores};
	
	while(*score_ptr != -1)
	{
		cout << *score_ptr << endl; 
		score_ptr++;
	}
	
	cout << "---------------------" << endl;
	
	score_ptr = scores;
	while(*score_ptr != -1)
	{
		// this first dereference, then increment 
		cout << *score_ptr++ << endl;
		// this first increment, then dereference 
		//cout << *++score_ptr << endl; 
	}
	
	cout << "---------------------" << endl;
	
	string s1 {"Frank"};
	string s2 {"Frank"};
	string s3 {"James"};
	
	string* p1 {&s1};
	string* p2 {&s2};
	string* p3 {&s1};
	
	cout << boolalpha; 
	
	cout << (p1==p2) << endl;
	cout << (p1==p3) << endl;
			
	cout << (*p1==*p2) << endl;
	cout << (*p1==*p3) << endl;
	
	p3 = &s3; 
	
	cout << (*p1==*p3) << endl;
	
	cout << "---------------------" << endl;
	
	char name[] {"Frank"};
	char* char_ptr1 {nullptr};
	char* char_ptr2 {nullptr};
	
	char_ptr1 = name;
	char_ptr2 = name + 3;
//	char_ptr1 = &name[0];
//	char_ptr2 = &name[3];
	
	cout << *char_ptr1 << endl;
	cout << *char_ptr2 << endl;
	
	
	
	return 0;
}
