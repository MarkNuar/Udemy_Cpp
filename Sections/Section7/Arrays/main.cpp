#include <iostream>

using namespace std;

int main(){
	char vowels [] {'a','e','i','o','u'};
	
	cout << "First vowel " << vowels [0] << endl;
	cout << "Last vowel " << vowels [4] << endl;
	
	//cint >> vowels[5];
	
	double hi_temps [] {91.1, 94.4, 83.2};
	hi_temps [0] = 87.9;
	cout << hi_temps [0] << endl;
	
	//int test_scores [10] {}; // init all to 0 
	//int test_scores [10] {0}; // init all to 0
	int test_scores [10] {100}; // set 100 only to the first element, 0 the others 
	
	for (int i = 0; i < 10; i++)
		cout << test_scores [i] << endl;
		
	cout << "Address of test_scores is " << test_scores << endl;
	
	cout << "Second element of vowels is " << *(vowels + 1) << endl;
	
	return 0;
}