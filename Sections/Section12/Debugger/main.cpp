#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int* const a, int* const b)
{
	int temp {*a};
	*a = *b;
	*b = temp;
}

int main()
{
	int i{5};
	while(i>0)
	{
		cout << i << endl;
		--i;
	}
	
	int x{4}, y{3};
	swap(&x, &y);
	
	return 0;
}
