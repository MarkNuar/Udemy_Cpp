#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int* a, int* b)
{
	int temp = *a; 
	*a = *b;
	*b = temp; 
}

void swap_ref(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x{100}, y{200};
	
	cout << "x " << x << " y " << y << endl;
	
	swap(&x,&y);
	
	cout << "x " << x << " y " << y << endl;
	
	swap_ref(x,y);
	
	cout << "x " << x << " y " << y << endl;
	
	return 0;
}
