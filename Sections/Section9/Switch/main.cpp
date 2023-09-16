#include <iostream>

using namespace std;

int main(){
	
	char letter_grade {};
	
	cout << "Enter grade" << endl;
	cin >> letter_grade;
	
	switch (letter_grade)
	{
		case 'a' :
		case 'A' : 
			cout << "You need >= 90" << endl;
			break;
		case 'b' : 
		case 'B' : 
			cout << "You need >= 80" << endl;
			break;
		case 'c' : 
		case 'C' : 
			cout << "You need >= 70" << endl;
			break;
		case 'd' : 
		case 'D' : 
			cout << "You need >= 60" << endl;
			break;
		case 'f' : 
		case 'F' : 
		{
			char confirm {};
			cout << "Are you sure (Y/N)?" << endl;
			cin >> confirm;
			if (confirm == 'y' || confirm == 'Y')
				cout << "You need <= 60" << endl;
			else if (confirm == 'n' || confirm == 'N')
				cout << "illegal choice" << endl;
			break;
		}
		default : 
			cout << "Wrong grade provided" << endl;
	}
	
	
	return 0;
}