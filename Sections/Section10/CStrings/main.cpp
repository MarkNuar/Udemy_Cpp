#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
	
	char first_name[20] {};
	char last_name[20] {};
	char full_name[50] {};
	char temp[50] {};
	
	cout << "Enter first name" << endl;
	cin >> first_name;
	cout << "Enter last name" << endl;
	cin >> last_name;
	
	cout << "Your first name has " << strlen(first_name) << " letters" << endl;
	cout << "Your last name has " << strlen(last_name) << " letters" << endl;
	
	strcpy(full_name, first_name); // copy first name to full name 
	strcat(full_name, " "); // append a space 
	strcat(full_name, last_name); // append last name 
	
	cout << "Your full name is " << full_name << endl;
	
	cout << "Enter your full name",
	cin.getline(full_name, 50); // this reads the whole name 
	// without getline, the string reading from buffer is stopper by spaces 
	
	strcpy(temp, full_name);
	if(strcmp(temp, full_name)==0)
	{
		cout << "same strings" << endl;
	}
	
	for(size_t i{0}; i<strlen(full_name); ++i)
	{
		if(isalpha(full_name[i]))
		{
			full_name[i] = toupper(full_name[i]);
		}
	}
	cout << "Capitalized " << full_name << endl;
	
	
	
	return 0;
}