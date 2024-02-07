#include <iostream>
using namespace std;

int main()
{

	int note1, note2, average;

	cout << "Enter your visa note: ";
	cin >> note1;

	cout << "Enter your final note: ";
	cin >> note2;

	average = note1 * 0.4 + note2 * 0.6;

	if (average >= 50)
	{
		cout << " " << "\n";
		cout << "Your midterm and final GPA = " << average << " Congratulations, you got a passing grade in the course." << "\n";
		cout << " ";
	}
	else {
		cout << " " << "\n";
		cout << "Your midterm and final GPA = " << average << " You did not get a passing grade in the course." << "\n";
		cout << " ";
	}
}
