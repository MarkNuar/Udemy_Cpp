#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int score {100};
	int* p_score {&score};

	cout << *p_score << endl;
	
	*p_score = 200; 
	
	cout << *p_score << endl;
	cout << score << endl; // score changed too, thats what we did with *p_score = 200;
	
	cout << endl <<  "*----------------------------*" << endl << endl;
	
	double high_temp {100.7}; 
	double low_temp {34.7};
	double* p_temp {&high_temp};
	
	cout << *p_temp << endl;
	p_temp = &low_temp;
	cout << *p_temp << endl;
	
	cout << endl <<  "*----------------------------*" << endl << endl;
	
	string name {"Mark"};
	string* p_string {&name};
	
	cout << *p_string << endl;
	name = "James";
	cout << *p_string << endl; // the pointer points always to the variable, so it gets the new content
	
	cout << endl <<  "*----------------------------*" << endl << endl;
	
	vector<string> stooges {"Mark", "Anne", "Laura"};
	vector<string>* p_vector {&stooges};
	
	cout << "First stooge: " << (*p_vector).at(0) << endl;
	
	cout << "Stooges: ";
	for(auto stooge : *p_vector)
	{
		cout << stooge << " ";
	}
	cout << endl;
	

	return 0;
}
