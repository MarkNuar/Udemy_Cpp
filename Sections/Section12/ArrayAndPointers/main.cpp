#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int scores[] {100, 95, 89};
	int* score_ptr{scores};
	
	cout << scores[0] << endl;
	cout << scores[1] << endl; // 1 means -> go next by the unit size of the element of the array, 4 byte in this case 
	cout << scores[2] << endl;
	cout << endl;
	
	cout << score_ptr[0] << endl;
	cout << score_ptr[1] << endl;
	cout << score_ptr[2] << endl;
	cout << endl;
	
	cout << *(scores) << endl;
	cout << *(scores+1) << endl;
	cout << *(scores+2) << endl;
	cout << endl;
	
	cout << *(score_ptr) << endl;
	cout << *(score_ptr+1) << endl;
	cout << *(score_ptr+2) << endl;
	cout << endl;
	
	return 0;
}
