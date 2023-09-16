#include <iostream>
#include <string>
#include <vector>

using namespace std;

// DECLARATIONS
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

// DEFINITIONS
void pass_by_value1(int num)
{
	num = 1000;
}

void pass_by_value2(string s)
{
	s = "Ciaone";
}

void pass_by_value3(vector<string> v)
{
	v.clear();
}

void print_vector(vector<string> v)
{
	for(auto s : v)
		cout << s << " ";
	cout << endl;
}

int main()
{
	int num{10};	
	cout << num << endl;
	pass_by_value1(num);
	cout << num << endl;
	
	string s{"Mariaaa"};
	cout << s << endl;
	pass_by_value2(s);
	cout << s << endl;
	
	vector<string> strings {"ciao", "sono", "marco"};
	print_vector(strings);
	pass_by_value3(strings);
	print_vector(strings);
	
	return 0;
}
