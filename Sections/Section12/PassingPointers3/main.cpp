#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string>* const v)
{
	for(auto str : *v)
	{
		cout << str << " ";
	}
	cout << endl;
}

void display(const int* head, int sentinel)
{
	while(*head != sentinel)
	{
		cout << *head++ << " ";
	}
	cout << endl;
}

int main()
{
	vector<string> names {"Mar", "Ann", "Lar"};
	display(&names);
	
	cout << endl;
	
	int scores[] {100, 23, 342, -1};
	display(scores, -1);
	
	return 0;
}
