#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <string>


class Account 
{
private: 
	std::string name;
	double balance; 
	
public: 
	// inline definition 
	void set_balance(double bal) {balance=bal;}
	double get_balance() {return balance;}
	
	// outise class definition
	void set_name(std::string n);
	std::string get_name();
	
	bool deposit(double amount);
	bool withdraw(double amount);
};

#endif // _ACCOUNT_H
