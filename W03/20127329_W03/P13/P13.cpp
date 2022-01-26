#include<iostream>
using namespace std;
// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input: 2020
//Ouput: Leap Year

// Test Case 2
//Input:2019
//Ouput: Not a leap year

// Test Case 3
//Input: 2011
//Ouput: Not a leap year

int main()
{
	int year;
	cout << "P13:NAM NHUAN" << endl;
	cout << "Trong do, 0 < year <= 10^9." << endl;

	while (1)
	{
		cout << "Enter year : ";
		cin >> year;
		if (year<0 || year>pow(10, 9))
		{
			cout << "Please try again" << endl;
		}
		else
			break;
	}
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		cout << "Leap Year" << endl;
	}
	else
	{
		cout << "Not a leap year" << endl;
	}

	return 0; 
}