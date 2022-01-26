#include<iostream>
#include<iomanip>
using namespace std;
// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input: 8 8 8 0
//Ouput: 8.0 PASSED

// Test Case 2
//Input: 0 0 0 0 
//Ouput: 0.0 FAILED

// Test Case 3
//Input: 10 10 10 1
//Ouput: 10.0 FAILED

int main()
{
	float final_Score;
	float lab_Score;
	float assignment_Score;
	bool cheating;
	cout << "Enter final score :";
	cin >> final_Score;
	cout << "Enter lab score :";
	cin >> lab_Score;
	cout << "Enter assignment score : ";
	cin >> assignment_Score;
	cout << "1. Cheating || 0. No cheating :";
	cin >> cheating;
	float average_Score = (0.3) * assignment_Score + (0.3) * lab_Score + (0.4) * final_Score;
	if ((lab_Score < 0 || lab_Score > 10) || (final_Score < 0 || final_Score > 10) || (assignment_Score < 0 || assignment_Score > 10))
	{
		cout << "Please try again" << endl;
	}
	else if (average_Score >= 5 && average_Score <= 10 && !cheating)
	{
		cout << fixed << setprecision(1) << average_Score << " ";
		cout << "PASSED" << endl;
	}
	else if (average_Score < 5 && average_Score >= 0 || cheating)
	{
		cout << fixed << setprecision(1) << average_Score << " ";
		cout << "FAILED" << endl;
	}
	else
	{
		cout << "Invalid" << endl;
	}

	return 0;
}