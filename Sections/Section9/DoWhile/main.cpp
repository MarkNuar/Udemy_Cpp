#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	char selection {0};
	do{
		cout << "----------------------" << endl;
		cout << "1. Do This" << endl;
		cout << "2. Do That" << endl;
		cout << "3. Do Those" << endl;
		cout << "Q. Quit" << endl;
		cout << "Enter your selection: ";
		cin >> selection; 
		
		if(selection=='1')
			cout << "You choose 1 - Doing this" << endl;
		else if(selection=='2')
			cout << "You choose 2 - Doing this" << endl;
		else if(selection=='3')
			cout << "You choose 3 - Doing this" << endl;
		else if(selection=='Q'||selection=='q')
			cout << "Goodbye..." << endl;
		else
			cout << "Unknown option, try again" << endl;
	
	} while (selection!='q' && selection!='Q');
	
	
	
	return 0;
}