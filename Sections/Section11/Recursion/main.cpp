#include <iostream>
#include <string>
#include <vector>

using namespace std;

unsigned long long fib(unsigned long long);
unsigned long long fact(unsigned long long);
unsigned long long fact_help(unsigned long long, unsigned long long);

unsigned long long fib(unsigned long long n)
{
	if(n <= 1)
		return n;
	else 
		return fib(n-1) + fib(n-2);
}

unsigned long long fact(unsigned long long n)
{
	if(n == 1)
		return n;
	else 
		return n * fact(n-1);
	return fact_help(n, 1);
}

unsigned long long fact_help(unsigned long long n, unsigned long long acc)
{
	if (n == 1)
		return acc;
	else 
		return fact_help(n-1, n * acc);
}



int main()
{
	unsigned long long n{0};
	cout << "Insert a number: ";
	cin >> n;
	
//	unsigned long long res {fib(n)};
//	cout << "The fibonacci value at position is: " << res << endl;
	
	cout << fact(n) << endl;
	
	return 0;
}
