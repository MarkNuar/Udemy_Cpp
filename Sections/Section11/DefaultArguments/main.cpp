#include <iostream>
#include <string>
#include <vector>

using namespace std;

// DECLARATION
double f(double v1, double v2 = 10);
void greeting(string name, string prefix = "Mr.", string suffix = "");


// DEFINITION
double f (double v1, double v2)
{
	return v1 + v2 * v1 - v2; 
}

void greeting(string name, string prefix, string suffix)
{
	cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

int main()
{
	cout << f(5) << endl;
	cout << f(5, 6) << endl;
	
	greeting("Mark");
	greeting("Doris", "Ms.");
	greeting("Laura", "Ms.", "Young");
	
	return 0;
}
