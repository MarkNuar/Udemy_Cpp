#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

void display_active_players() 
{
	cout << "Active players: " << Player::get_num_players() << endl;
}

int main()
{
	display_active_players(); 
	Player p1 {"Jhon", 9, 1};
	Player p2 {"Erik"};
	display_active_players(); 
	Player* p3p = new Player("Mom", 5);
	display_active_players();
	delete p3p;
	display_active_players();
	return 0;
}
