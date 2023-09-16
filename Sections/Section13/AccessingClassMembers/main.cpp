#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player 
{
public:
	// attributes 
	string name {"Player"};
	int health {0};
	int xp {0};
	
	// methods declaration 
	void talk(string text_to_say)
	{
		cout << name << " says " << text_to_say << endl;
	}
	bool is_dead()
	{
		return !(health > 0);
	}
};

class Account
{
public:
	// attributes 
	string name {"Account"};
	double balance {0};
	
	// methods
	bool deposit(double bal)
	{
		balance += bal;
		cout << "Depositing" << endl;
		return true;
	}
	bool withdraw(double bal)
	{
		balance -= bal;
		cout << "Depositing" << endl;
		return true;
	}
};


int main()
{
	cout << boolalpha;
	
	Player frank; 
	frank.name = "Frank";
	frank.health = 100; 
	frank.xp = 12;
	frank.talk("Hi there");
	cout << frank.is_dead() << endl;
	
	
	Player* enemy {new Player};
	enemy->name = "Edgar";
	(*enemy).health = 13;
	enemy->xp = 130;
	enemy->talk("I'm the enemy");
	if(enemy->is_dead())
		cout << enemy->name << " is dead" << endl;
	else 
		cout << enemy->name << " is alive" << endl;
	delete enemy; // REMEMBER TO FREEEEEEEE MEMORY WHEN NOT NEEDED.
	
	
	Account frank_account;
	frank_account.name = "Frank's account";
	frank_account.balance = 5000;
	frank_account.deposit(342);
	frank_account.withdraw(3111);
	
	return 0;
}
