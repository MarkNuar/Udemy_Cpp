#include <iostream>
#include <string>
#include <vector>

using namespace std;

// DECLARATIONS
void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
// Here pbr const since I dont' want to edit the vector
void print_vector(const vector<string> &v);

// DEFINITIONS
void pass_by_ref1(int &num)
{
	num = 1000;
}

void pass_by_ref2(string &s)
{
	s = "Ciaone";
}

void pass_by_ref3(vector<string> &v)
{
	v.clear();
}

void print_vector(const vector<string> &v)
{
	for(auto s : v)
		cout << s << " ";
	cout << endl;
}

int main()
{
	int num{10};	
	cout << num << endl;
	pass_by_ref1(num);
	cout << num << endl;
	
	string s{"Mariaaa"};
	cout << s << endl;
	pass_by_ref2(s);
	cout << s << endl;
	
	vector<string> strings {"ciao", "sono", "marco"};
	print_vector(strings);
	pass_by_ref3(strings);
	print_vector(strings);
	
	return 0;
}
