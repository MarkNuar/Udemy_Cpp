// Section 13
// Constructors and Destructors

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    void set_name(std::string name_val) { 
        name = name_val; 
    }
    // Overloaded Constructors
    Player() { 
        cout << "No args constructor called"<< endl;
    }
    Player(std::string name) { 
        cout << "String arg constructor called"<< endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called"<< endl; 
    }
    ~Player() { 
        cout << "Destructor called for " << name << endl; 
    }
};

int main() {

    {
        Player slayer; // constructor slayer
        slayer.set_name("Slayer");
    } // destructor slayer
    
    {
        Player frank; // constructor frank
        frank.set_name("Frank");
        Player hero("Hero"); // constructor Hero
        hero.set_name("Hero");
        Player villain("Villain", 100, 12); // constructor villan
        villain.set_name("Villain");
    } // 3 destructors called, in revers order of creation 
    
	// explicit memory management 
    // Player *enemy = new Player;
	// use the new with the constructor, more oop style 
    Player *enemy = new Player(); // constructor called
    enemy->set_name("Enemy"); 
    
    Player *level_boss = new Player("Level Boss", 1000, 300); // constructor called 
    level_boss->set_name("Level Boss");
    
    delete enemy; // destructor of enemy called 
    delete level_boss; // destructor of level_boss called 
    
    return 0;
}

