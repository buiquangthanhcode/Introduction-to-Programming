#include<iostream>
using namespace std;
// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input: 1 2020
//Ouput: 31 

// Test Case 2
//Input: 2 2019
//Ouput: 28

// Test Case 3
//Input:  3 2011
//Ouput: 31

bool isLeapYear(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) 
	{
		return true;
	}
	return false;
}
int find_Day(int month, int year)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else
	{
		if (isLeapYear(year))
			return 29;
		else
			return 28;
	}
}

int main()
{

	int month, year;
	while (1)
	{
		cout << "Hay nhap thang va nam :";
		cin >> month >> year;
		if (month < 0 || month>12 || year < 0)
		{
			cout << "Vui long nhap lai " << endl;
		}
		else
			break;
	}
	cout << find_Day(month, year) << endl;
	
	return 0; 
}