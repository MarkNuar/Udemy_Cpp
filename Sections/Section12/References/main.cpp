#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
//	int num{100};
//	int &ref {num};
//	
//	cout << num << endl;
//	cout << ref << endl << endl;
//	
//	num = 200;
//	cout << num << endl;
//	cout << ref << endl << endl;
//	
//	ref = 300; 
//	cout << num << endl;
//	cout << ref << endl << endl;
	
	vector<string> names {"Mar", "meme", "mse"};
	
	for(auto str : names)
	{
		// inefficient, since it is also making copies of each string everytime!!!!
		str = "Funny"; // this does not change anything, since str is a copy 
	}
	
	for(auto& str : names)
	{
		str = "Funny"; // this changes the values in the vector 
	}
	
	for(const auto& str : names)
	{
		cout << str << " ";
		// str = "Ch"; // compiler error
	} 
	
	cout << endl;
	
	return 0;
}
