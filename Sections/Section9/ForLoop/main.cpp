#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> numbers (10);

//	for (int i{}; i<static_cast<int>(numbers.size()); ++i)
//	{
//		numbers.at(i) = i;
//	}
//	
//	for (int i{}; i<static_cast<int>(numbers.size()); ++i)
//	{
//		cout << numbers.at(i) << endl;
//	}
	
//	for (int i{1},j{5} ; i<=5 ; ++i,++j)
//	{
//		cout << i*j << endl;
//	}
//	
//	for (int i{1}; i<=100 ; ++i)
//	{
//		cout << i;
//		if (i%10 == 0)
//			cout << endl;
//		else
//			cout << " ";
//	}
//	
//	for (int i{1} ; i<=100 ; ++i)
//	{
//		cout << i << ((i%10==0)? "\n" : " "); 
//	}

	vector <int> nums {10, 20, 30, 40, 50};
	for(unsigned i{0} ; i<nums.size(); ++i)
	{
		cout << nums.at(i) << endl;
	}


	return 0;
}