#include <iostream>

using namespace std;

int main(){
	const int min_score {0};
	const int max_score {100};
	int score {};
	char letter_grade {'f'};
	
	cout << "Enter your grade, between " << min_score << " and " << max_score << endl;
	cin >> score;
	
	if (score >= min_score && score <= max_score)
	{
		if (score >= 90)
			letter_grade = 'A';
		else if (score >= 80) 
			letter_grade = 'B';
		else if (score >= 70) 
			letter_grade = 'C';
		else if (score >= 60)
			letter_grade = 'D';
		else
			letter_grade = 'F';
			
		cout << "Your grade is " << letter_grade << endl;
		if (letter_grade == 'F')
			cout << "Sorry, you have to repeat this class" << endl;
		else 
			cout << "Congrats" << endl;
	}
	else
	{
		cout << "Sorry, the number entered is not in range" << endl;
	}
	
	
	cout << endl;
	return 0;
}