#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player 
{
private:
	// attributes 
	string name {"Player"};
	int health {0};
	int xp {0};
public:
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


int main()
{
	Player frank;
	//frank.name = "Frank";
	frank.talk("Hello there");
	return 0;
}
