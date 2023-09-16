#include <iostream>
#include <string>
#include <vector>

using namespace std;

int* create_array(size_t size, int init_value = 0)
{
	int* new_storage{nullptr};
	// allocated on the heap! so it reamins even after the function ends
	new_storage = new int[size];
	for(size_t i{}; i<size; ++i)
	{
		*(new_storage +i) = init_value;
	}
	return new_storage;
}

void display_array(const int* const array, size_t size)
{
	for(size_t i{}; i<size; ++i)
	{
		cout << *(array + i) << " ";
	}
	cout << endl;
}


int main()
{
	int* my_array {nullptr};
	size_t size; 
	int init_value {};
	
	cout << "Size?" << endl;
	cin >> size; 
	cout << "Init value?" << endl;
	cin >> init_value;
	
	my_array = create_array(size, init_value);
	display_array(my_array, size);
	delete[] my_array;
	
	
	return 0;
}
