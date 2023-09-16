#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player 
{
private: 
	std::string name;
	int health;
	int xp;
public: 
	std::string get_name() {return name;}
	int get_health() {return health;}
	int get_xp() {return xp;}
	// Constructor 
	Player(std::string name_val="None", int health_val=0, int xp_val=0);
	// Copy Constructor
	Player(const Player& source);
	// Destructor 
	~Player() { cout << "Destructor called for: " << name << endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val)
	: name {name_val}, health {health_val}, xp {xp_val}
{}
	
Player::Player(const Player& source) 
//	: name {source.name}, health {source.health}, xp {source.xp} 
	: Player {source.name, source.health, source.xp} // here with delegation 
{
	cout << "Copy constructor, made a copy of " << source.name << endl;
}

void display_player(Player p) 
{
	cout << p.get_name() << endl;
}


int main()
{
	Player p1 {"Mark"};
	Player p2 {"Giorgio", 0, 99};
	Player p3 {p1};
	
	Player* p4_p = new Player(p1);
	delete p4_p;
	
	return 0;
}
