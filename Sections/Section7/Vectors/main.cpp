#include <iostream>
#include <vector> // necessary to use vectors 

using namespace std;

int main(){
		
	//vector <char> vowels; // empty
	//vector <char> vowels (5); // 5 initialized to zero
	vector <char> vowels {'a','e','i','o','u'};
	
	cout << vowels[0] << endl;
	cout << vowels[4] << endl;
	
	//cout << vowels[7] << endl; // no bounds checking 
	//cout << vowels.at(7) << endl; // bounds checking, exception thrown
	
	cout << vowels.size() << endl;
	
	vowels.push_back('y');
	
	cout << vowels.size() << endl;
	
	cout << "Add new letter ";
	char c {'a'}; 
	cin >> c;
	vowels.push_back(c);
	cout << "Now there are " << vowels.size() << " letters" << endl;
	cout << "Last letter " << vowels.at(vowels.size()-1) << endl;
	
	
	// 2D vector 
	vector<vector<int>> movie_ratings // vector of vector 
	{
		{1,2,3,4},
		{1,2,3,4},
		{1,2,3,4}
	}
	// 2 equivalent ways 
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings.at(0).at(0) << endl; // at row 0, at column 0
	

	return 0;
}