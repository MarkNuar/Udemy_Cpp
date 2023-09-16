#pragma once
#include <string>

class Player
{
private: 
	static int num_players;
	std::string name;
	int health;
	int xp;
	
public:
	// Constructor 
	Player(std::string name_val="None", int health_val=10, int xp_val=0);
	// Copy Constructor 
	Player(const Player& source);
	// Destructor 
	~Player();
	
	std::string get_name() { return name; }
	int get_health() { return health; }
	int ge_xp() { return xp; }
	
	static int get_num_players();
	
};

