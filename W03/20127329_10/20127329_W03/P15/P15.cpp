#include<iostream>
using namespace std;

// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input: 1  1 2020
//Ouput: 2  1 2020  

// Test Case 2
//Input: 31 12 2020
//Ouput: 1 1 2021

// Test Case 3
//Input:  28  2 2020
//Ouput: 29 2 2020
int checkLeapYear(int nam)
{
	return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}
int main()
{
	int day, month, year;
	while (1)
	{
		cout << "Enter day ,month,year" << endl;
		cin >> day >> month >> year;
		if (checkLeapYear(year) == 1 && day >= 29 && month == 2 || day > 32 || day <= 0 || month <= 0 || month > 12 || year < 0 || checkLeapYear(year) == 0 && day >= 29 && month == 2)
		{

			cout << "Khong ton tai!.Nhap lai " << endl;
		}
		else
			break;
	}
	
	if (checkLeapYear(year) == 1 && day >= 29 && month == 2 || day > 32 || day <= 0 || month <= 0 || month > 12 || year < 0 || checkLeapYear(year) == 0 && day >= 29 && month == 2)
	{

		cout << "Khong ton tai " << endl;
	}
	else
	{
		day++;
		if (day == 32 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
		{
			day = 1;
			month++;
			if (month == 13)
			{
				day = month = 1;
				year++;
			}
		}
		else if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
		{
			day = 1;
			month++;
		}
		else if (checkLeapYear(year) && day == 30 && month == 2)
		{
			day = 1;
			month++;
		}
		else if (checkLeapYear(year) == 0 && day == 29 && month == 2)
		{
			day = 1;
			month++;
		}
		cout << "Ngay ke tiep la :" << " ";
		cout << day << " " << month << " " << year << endl;
	}


}