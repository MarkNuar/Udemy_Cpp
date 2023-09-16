#include <iostream>

extern int x;

int main(){
	std::cout << "My Template" << std::endl;
	// on build, it cannot find x
	std::cout << x;
	return 0;
}