#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account account;
	account.set_name("Mark's account");
	account.set_balance(1000.0);
	
	if(account.deposit(200))
		cout << "Deposit OK" << endl;
	else 
		cout << "Deposit Not allowed" << endl;
		
	if(account.withdraw(800))
		cout << "Withdraw OK" << endl;
	else 
		cout << "Withdraw Not allowed" << endl;
		
	if(account.withdraw(800))
		cout << "Withdraw OK" << endl;
	else 
		cout << "Withdraw Not allowed" << endl;
	
	return 0;
}
