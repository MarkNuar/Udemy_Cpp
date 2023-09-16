#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	cout << "Enter a string for forming the piramid: ";
	string base_string {};
	cin >> base_string;
	string reversed_string {};
	for(size_t i{}; i<base_string.size(); ++i)
		reversed_string.push_back(base_string.at(base_string.size()-i-1));
	
	string result_string {};
	for(size_t i{}; i<base_string.size(); ++i)
	{		
		result_string = base_string.substr(0, i+1);
		
		if(i > 0)
			result_string += reversed_string.substr(
							reversed_string.size()-i,i);
							
		size_t n_spaces = base_string.size()-i- 1;
		
		for(size_t j{}; j<n_spaces; j++)
			result_string = " " + result_string;
			
		cout << result_string << endl;
	}
	
	return 0;
}
