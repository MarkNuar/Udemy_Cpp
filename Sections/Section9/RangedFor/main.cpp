#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
	int scores [] {100, 90, 97};
	
	for(auto s : scores)
	{
		cout << s << endl;
	}


	vector<double> temperatures {98.3, 54.2, 46.4, 89.0};
	double avg_temp {0};
	double sum_temp {0};
	for(auto t : temperatures)
	{
		sum_temp += t;
	}
	if(temperatures.size() > 0)
	{
		avg_temp = sum_temp / temperatures.size();
		cout << fixed << setprecision(1);
		cout << avg_temp << endl;
	}


	// iterate directly on declaration list 
	for(auto v : {1,4,3,5,2,6,3})
	{
		cout << v << " ";
	}
	cout << endl;
	
	
	// iterate over string 
	for(auto c : "This is a test")
	{
		if(c != ' ') // skip spaces
			cout << c;
	}
	cout << endl;

	
	// enalarge spaces with tabs
	for(auto c : "This is a test")
	{
		if(c == ' ')
			cout << "\t";
		else
			cout << c;
	}
	cout << endl;

	
	return 0;
}