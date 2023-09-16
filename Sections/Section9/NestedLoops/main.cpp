#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<vector<int>> matrix {
		{1,3,2,5},
		{2,4,2,5},
		{1,4,2,6}
	};
	
	for(auto row : matrix)
	{
		for(auto el : row)
		{
			cout << el << " ";
		}
		cout << endl;
	}
	
	
	vector<int> v1 {1,5,3,6,3};
	vector<int> v2 {1,9,5,3,7};
	
	for(auto e1 : v1)
	{
		for(auto e2 : v2)
		{
			cout << e1 * e2 << " ";
		}
		cout << endl;
	}
	
	return 0;
}