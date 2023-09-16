#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_array(int[], size_t);
void set_array(int[], size_t, int);

// The const keyword makes sure that the memory location of the array is not modified 
// during the function call
void print_array(const int arr[], size_t size)
{
	for(int i{}; i<size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void set_array(int arr[], size_t size, int value)
{
	for(int i{}; i<size; ++i)
	{
		arr[i] = value;
	}
}

int main()
{
	int my_scores[] {100,97,93,100,87};
	
	print_array(my_scores, 5);
	set_array(my_scores, 5, 100);
	print_array(my_scores, 5);
	
	return 0;
}
