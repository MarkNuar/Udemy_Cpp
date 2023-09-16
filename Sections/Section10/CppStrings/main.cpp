#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main(){
	cout << boolalpha;
	
	string s0;
	string s1 {"Apple"};
	string s2 {"Banana"};
	string s3 {"Kiwi"};
	string s4 {"apple"};
	string s5 {s1}; // Apple 
	string s6 {s1, 0, 3}; // App 
	string s7 {10, 'X'}; // XXXXXXXXXX
	
	cout << s0 << endl; // no garbage 
	cout << s0.length() << endl; // 0 length 
	
	s1 = "Watermelon";
	cout << "s1 is now " << s1 << endl;
//	s2 = {"Helo"};
//	cout << s2 << endl;
//	s3[0] = 'C';
//	s3.at(0) = 'P';
//	cout << s3 << endl;
	
//	s3 = s1 + " and " + s2 + " and " + "pen"; 
//	s3 = "ciao bella ciao" + s3;
//	cout << s3 << endl; 

	s1 = "Apple";
	for(size_t i{}; i<s1.length(); ++i)
	{
		cout << s1.at(i);
	}
	cout << endl;
	
	for(auto c : s1)
	{
		cout << c;
	}
	cout << endl;
	
	
	// Substring 
	s1 = "This is a test";
	cout << s1.substr(0, 4) << endl;
	cout << s1.substr(5,2) << endl;
	s1.erase(0,5);
	cout << s1 << endl;
	
	// getline 
	cout << "Enter your name: ";
	string full_name {};
	getline(cin, full_name);
	cout << full_name << endl;
	
	
	// find 
	s1 = "The secret word is Boo";
	string word {};
	
	cout << "Enter the word to find ";
	cin >> word;
	
	size_t position = s1.find(word);
	if(position != string::npos)
	{
		cout << "Found at position " << position << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}
	
	
	
	
	return 0;
}