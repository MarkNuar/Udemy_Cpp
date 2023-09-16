#include <iostream>

int main(){
	std::cout << "Enter your favourite number between 1 and 100: ";
	int num;
	std::cin >> num;
	num++;
	std::cout << "Sorry, " << num << " is my favourite number.." << std::endl;
	return 0;
}