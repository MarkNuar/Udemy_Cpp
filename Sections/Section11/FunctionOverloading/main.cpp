#include <iostream>
#include <string>
#include <vector>

using namespace std;
// DECLARATIONS
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int n)
{
	cout << "int " << n << endl;
}

void print(double n)
{
	cout << "double " << n << endl;
}

void print(string s)
{
	cout << "string " << s << endl;
}

void print(string s1, string s2)
{
	cout << "string " << s1 << " " << s2 << endl;
}

void print(vector<string> ss)
{
	cout << "vector of strings ";
	for(auto s : ss)
		cout << s << " ";
	cout << endl;
}

int main()
{
	print(100);
	print('A');
	
	print(123.5);
	print(123.5F); // with F is casted to float, but then uses the double version of print 
	
	print("C_stile_string");
	string s {"Cpp String"};
	print(s);
	
	print(s, s);
	
	vector<string> names {"Mar", "Ann", "Lau"};
	print(names);
	
	return 0;
}
