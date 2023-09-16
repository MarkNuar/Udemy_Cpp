// Section 13
// Constructor Initialization Lists
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	std::string name {"XXXXXXX"};
	int health;
	int xp;
public: 
	Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

// constructor initialization list 
Player::Player() : Player {"None", 0, 0}{
		cout << "No args called" << endl;
	}

// constructor initialization list 
Player::Player(std::string name_val) : Player {name_val, 0, 0} {
		cout << "1 arg called" << endl;
	}

// constructor initialization list   
Player::Player(std::string name_val, int health_val, int xp_val) :
	name{name_val}, health{health_val}, xp{xp_val} {
		cout << "3 args called" << endl;
	}

int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}

