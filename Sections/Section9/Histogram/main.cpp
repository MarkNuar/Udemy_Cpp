#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int num_items {0};
	
	do
	{
		cout << "How many data items do you have? ";
		cin >> num_items;
	} while (num_items < 0);
	
	vector<int> data{};
	for(int i{1}; i<=num_items; ++i)
	{
		int data_item {};
		cout << "Enter data item " << i << ": ";
		cin >> data_item;
		data.push_back(data_item);
	}
	
	cout << "displaying histogram" << endl;
	for(auto v : data)
	{
		for(int i{1}; i<=v; ++i)
		{
			cout << ((i%5==0)? "~" : "-");
		}
		cout << endl;
	}
	cout << endl;

	
	return 0;
}