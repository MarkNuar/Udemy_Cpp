#include <iostream>
#include <cstdlib> // required for rand()
#include <ctime> // required for time()

using namespace std;

int main()
{
	int random_number {};
	size_t count{10};
	const int min {1};
	const int max {6};
	
	// rand generates a random number between 0 and RAND_MAX
	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	
	// in a random number generator, the sequence is random, but the starting point no
	// for this reason a seed is required
	srand(time(nullptr)); // seeding the random generator with a seed based on time 
	
	for(size_t i{1}; i<=count; ++i)
	{
		random_number = rand() % max + min; // generates a random number in [min, max]
		cout << random_number << endl;
	}
	
	return 0;
}
