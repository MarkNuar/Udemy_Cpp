#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account 
{
private: 
	string name;
	double balance; 
	
public: 
	// inline definition 
	void set_balance(double bal) {balance=bal;}
	double get_balance() {return balance;}
	
	// outise class definition
	void set_name(string n);
	string get_name();
	
	bool deposit(double amount);
	bool withdraw(double amount);	
};

void Account::set_name(string n)
{
	name = n;
}

string Account::get_name()
{
	return name;
}

bool Account::deposit(double amount)
{
	balance+=amount;
	return true;
}

bool Account::withdraw(double amount)
{
	if(balance-amount >= 0)
	{
		balance-=amount;
		return true;
	}
	else 
		return false;
}

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
