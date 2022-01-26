#include"Function.h"
void inputNumberPositive(const char s[], int& n)
{
	while (1)
	{
		cout << "Enter  " << s << " : ";
		cin >> n;
		if (n < 0)
		{
			cout << "Vui long nhap lai " << endl;
		}
		else
			break;
	}
}

bool checkLeapYear(int year)
{

	if (year % 400 == 0)
		return true;


	if (year % 100 == 0)
		return false;


	if (year % 4 == 0)
		return true;
	return false;
}
bool checkInput(int day, int month, int year)
{
	if (day <= 0 || month <= 0 || year <= 0 || month > 12)
	{
		return false;
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day > 31)
		{
			return false;
		}
	}
	if (month == 4 || month == 6 || month == 11 || month == 9)
	{
		if (day > 30)
			return false;
	}
	return true;
}
void outputYYYYMMDD(fstream& outfile ,Date date)
{

	if (checkLeapYear(date.year) == 1 && date.day > 29 && date.month == 2
		|| checkLeapYear(date.year) == 0 && date.day >= 29 && date.month == 2 || checkInput(date.day, date.month, date.year) == 0)
	{
		outfile << "Input Again" << endl;
	}
	else
	{
		outfile << date.year << "\\"; outputZeroAtHead_Fstream(outfile,date.month); outfile << "\\"; outputZeroAtHead_Fstream(outfile,date.day); outfile << endl;
	}

}
void ouputMonthText(fstream&outfile,int month)
{

	if (month == 1)
	{
		outfile << "Jan";
	}
	else if (month == 2)
	{
		outfile << "Feb";
	}
	else if (month == 1)
	{
		outfile << "Jan";

	}
	else if (month == 3)
	{
		outfile << "Mar";
	}
	else if (month == 4)
	{
		outfile << "Apr";
	}
	else if (month == 5)
	{
		outfile << "May";
	}
	else if (month == 6)
	{
		outfile << "Jun";

	}
	else if (month == 7)
	{
		outfile << "Jul";
	}
	else if (month == 8)
	{
		outfile << "Aug";
	}
	else if (month == 9)
	{
		outfile << "Sep";
	}
	else if (month == 10)
	{
		outfile << "Oct";
	}
	else if (month == 11)
	{
		outfile << "Nov";
	}
	else if (month == 12)
	{
		outfile << "Dec";
	}
}
int countNumber(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number = number / 10;
	}
	return count;
}

void outputZeroAtHead_Fstream(fstream& outfile, int number)
{
	if (countNumber(number) == 1)
	{
		outfile << "0" << number;

	}
	else
	{
		outfile << number;
	}
}
// 2019
int TwoNumberEndOfYear(int year)
{
	int result = 1;
	int temp = year;
	year = year / 10;
	result = (year % 10) * 10;
	result = result + (temp % 10);
	return result;
}
void outputDateWithFormat(fstream&outfile,const char namefile[] ,Date date1, const char str[])
{
	outfile.open(namefile, ios::out);
	if (!outfile)
	{
		outfile << "Error!!" << endl;
	}
	else
	{
		int year = TwoNumberEndOfYear(date1.year);
		if (str == "yyyy - MM - dd")
		{
			outfile << date1.year << " - "; outputZeroAtHead_Fstream(outfile, date1.month); outfile << " - ";  outputZeroAtHead_Fstream(outfile, date1.day);

		}
		else if (str == "MMM dd yy")
		{
			ouputMonthText(outfile, date1.month); outfile << " "; outputZeroAtHead_Fstream(outfile, date1.day); outfile << " "; outputZeroAtHead_Fstream(outfile, year);
		}
	}
	
}
void readFile(fstream& infile, const char namefile[], Date& date)
{

	infile.open(namefile, ios::in);
	if (!infile)
	{
		cout << "Error!!" << endl;
	}
	else
	{
		while (!infile.eof())
		{
			infile >> date.day >> date.month >> date.year;
		}


	}
	infile.close();
}
void readFile_TwoDate(fstream& infile, const char namefile[], Date& date1, Date& date2)
{

	infile.open(namefile, ios::in);
	if (!infile)
	{
		cout << "Error!!" << endl;
	}
	else
	{
		while (!infile.eof())
		{
			infile >> date1.day >> date1.month >> date1.year;
			infile >> date2.day >> date2.month >> date2.year;
		}


	}
	infile.close();
}

void WriteFile(fstream& outfile, const char namefile[], Date& date)
{
	outfile.open(namefile, ios::out);
	if (!outfile)
	{
		outfile << "Error!!" << endl;
	}
	else
	{
		if (checkLeapYear(date.year) == 1 && date.day > 29 && date.month == 2
			|| checkLeapYear(date.year) == 0 && date.day >= 29 && date.month == 2 || checkInput(date.day, date.month, date.year) == 0)
		{
			outfile << "Input Again" << endl;
		}
		else
		{
			outfile << date.year << "\\"; outputZeroAtHead_Fstream(outfile, date.month); outfile << "\\"; outputZeroAtHead_Fstream(outfile, date.day); outfile << endl;
		}

	}
}

int compare2Date(Date date1, Date date2)
{
	bool flagGreater;
	bool flagLess;
	bool flagEqual;
	if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
	{
		return 3;
	}
	if (date1.year > date2.year)
	{
		return 1;
	}
	else if (date1.year < date2.year)
	{
		return 2;
	}
	else
	{

		if (date1.month == date2.month)
		{
			if (date1.day > date2.day)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else
		{
			if (date1.month > date2.month)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
	}
}
void compare_Date(fstream& outfile, Date date1, Date date2)
{
	outfile.open("output.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error!!" << endl;
	}
	else
	{
		if (compare2Date(date1, date2) == 1)
		{
			outfile << "Date1  greater than Date2" << endl;
		}
		else if (compare2Date(date1, date2) == 2)
		{
			outfile << "Date1 less than Date2" << endl;
		}
		else
		{
			outfile << "Date1 equal Date" << endl;

		}
	}


}