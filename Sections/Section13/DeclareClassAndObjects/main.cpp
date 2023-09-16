#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player 
{
	// attributes 
	string name {"Player"};
	int health {0};
	int xp {0};
	
	// methods declaration 
	void talk(string);
	bool is_dead();	
	
};

class Account
{
	// attributes 
	string name {"Account"};
	double balance {0};
	
	// methods
	bool deposit(double);
	bool withdraw(double);
};


int main()
{
	Player frank;
	Player hero; 	
	
	Player* enemy {nullptr};
	enemy = new Player; 
	
	Player players[] {frank, hero};
	
	vector<Player> player_vec {frank};
	player_vec.push_back(hero);
	player_vec.push_back(*enemy);
	
	// -------------------------- // 
	
	Account frank_account;
	Account jim_account;
	
	
	
	
	delete enemy;
	
	return 0;
}
