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

	outfile.open("output.txt", ios::out);
	if (!outfile)
	{
		outfile << "Errorr" << endl;
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
	outfile.close();
	

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
	outfile.close();
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
	outfile.close();
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
	outfile.close();

}
void readDayOfWeek(fstream& outfile ,int number)
{
	
	
		if (number == 0)
		{
			outfile << "Thursday";
		}
		else if (number == 1)
		{
			outfile << "Friday";
		}
		else if (number == 2)
		{
			outfile << "Sarturday";
		}
		else if (number == 3)
		{
			outfile << "Sunday";
		}
		else if (number == 4)
		{
			outfile << "Monday";
		}
		else if (number == 5)
		{
			outfile << "Tuesday";

		}
		else if (number == 6)
		{
			outfile << "Wednesday";
		}

}
void compuateDateOfWeek(fstream &outfile,Date date)
{
	int count = 0;
	int distance = 0;
	int day = 1;
	int month = 1;
	int year = 1970;
	while (1)
	{
		day++;
		count++;
		if (count == 6)
		{
			count = 0;
		}
		distance++;
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
		if (day == date.day && month == date.month && year == date.year)
		{
			break;
		}
	}
	readDayOfWeek(outfile,count);
}
int computeDistance_111970(Date date)
{
	int result = computeDistance(1, 1, 1970, date.day, date.month, date.year);
	return result;
}
int computeDistance_11SameYear(Date date)
{
	return computeDistance(1, 1, date.year, date.day, date.month, date.year);
}

int computeDistanceTwoDate(Date date1, Date date2)
{
	return computeDistance(date1.day, date1.month, date1.year, date2.day, date2.month, date2.year);
}

int computeDistance(int day, int month, int year, int cur_day, int cur_month, int cur_year)
{
	int distance = 0;
	if (checkLeapYear(year) == 1 && day > 29 && month == 2
		|| checkLeapYear(year) == 0 && day >= 29 && month == 2 || checkInput(day, month, year) == 0)
	{

		return -1;
	}
	else
	{
		while (1)
		{
			day++;
			distance++;
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
			if (day == cur_day && month == cur_month && year == cur_year)
			{
				break;
			}
		}
	}
	return distance;


}
void tomorrow(Date& date)
{
	IncreaseByKDay(date, 1);
}
void IncreaseByKDay(Date& date, int n)
{
	while (n--)
	{
		date.day++;
		if (date.day == 32 && (date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12))
		{
			date.day = 1;
			date.month++;
			if (date.month == 13)
			{
				date.day = date.month = 1;
				date.year++;
			}
		}
		else if (date.day == 31 && (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11))
		{
			date.day = 1;
			date.month++;
		}
		else if (checkLeapYear(date.year) && date.day == 30 && date.month == 2)
		{
			date.day = 1;
			date.month++;
		}
		else if (checkLeapYear(date.year) == 0 && date.day == 29 && date.month == 2)
		{
			date.day = 1;
			date.month++;
		}
	}


}
void yesterday(Date& date)
{
	DecreaseByKDay(date, 1);
}
void DecreaseByKDay(Date& date, int n)
{
	int temp = n;
	(date.day == 1) ? temp = --n : temp = n;
	while (temp--)
	{
		date.day--;
		if (date.day == 0 && (date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12))
		{
			date.day = 30;
			date.month--;
		}
		else if (date.day == 0 && (date.month == 2 || date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11))
		{
			date.day = 31;
			date.month--;
		}
		else
		{
			if (date.day == 0 && date.month == 3)
			{
				if (checkLeapYear(date.year))
				{
					date.day = 29;
				}
				else
				{
					date.day = 28;
				}
				date.month--;
			}
			if (date.day == 0 && date.month == 1)
			{
				date.day = 31;
				date.month = 12;
				date.year--;
			}

		}

	}

}

void WriteFileStr(const char s[], fstream& outfile)
{
	outfile.open("output,txt", ios::out);
	if (!outfile)
	{
		outfile << "Erorr!!" << endl;
	}
	else
	{
		outfile << s << endl; 
	}
	outfile.close();
}
void readFile1K_1Date(fstream&infile, Date& date,int&k)
{
	infile.open("input1Date.txt", ios::in);
	if (!infile)
	{
		cout << "Error" << endl;
	}
	else
	{
		
		infile >> k >> date.day >> date.month >> date.year;
	}
}



void menuDate()
{
	int choose;
	Date date{ 1,1,2021 };
	Date date1{ 1,1,2021 }, date2{ 2,1,2021 };
	while (1)
	{
		system("cls");
		cout << "1.Input a date.(Read files on demand)" << endl;
		cout << "2.Output a date (yyyy-MM-dd)." << endl;
		cout << "3.Output a date with a given format." << endl;
		cout << "4.Load a date from a text file." << endl;
		cout << "5.Save a date to another text file." << endl;
		cout << "6.Compare 2 date.." << endl;
		cout << "7.Find tomorrow: increase a date by 1 day." << endl;
		cout << "8.Find yesterday: decrease a date by 1 day." << endl;
		cout << "9.Increase a date by k day.." << endl;
		cout << "10.Decrease a date by k day." << endl;
		cout << "11.Compute the distance between input date vs 1/1/same year." << endl;
		cout << "12.Compute the distance between input date vs 1/1/1970." << endl;
		cout << "13.Compute the distance between 2 Date." << endl;
		cout << "14.Given that the date of week of 1970-01-01 is Thursday. Compute the date ofweek of the input date." << endl;
		cout << "0.End" << endl;
		inputNumberPositive("Choose", choose);
		cin.ignore();
		if (choose == 1)
		{
			fstream infile, outfile;
			readFile(infile, "input1Date.txt", date);
			cout << date.year << "\\" << date.month << "\\" << date.day << endl;

		}
		else if (choose == 2)
		{
			cout << "Open File :D :D " << endl;

		}
		else if (choose == 3)
		{
			int number;
			fstream outfile;
			cout << "1.yyyy - MM - dd" << endl;
			cout << "2.MMM dd yy" << endl;
			cout << "Enter number :";
			cin >> number;
			if (number == 1)
			{
				cout << "Open File :D :D " << endl;
				outputDateWithFormat(outfile, "output.txt", date, "yyyy - MM - dd");
				cout << endl;
			}
			else if (number == 2)
			{
				cout << "Open File :D :D " << endl;
				outputDateWithFormat(outfile, "output.txt", date, "MMM dd yy");
				cout << endl;
			}
			else
			{
				cout << "InValid" << endl;
			}

		}
		else if (choose == 4)
		{
			fstream infile;
			Date date2{ 1,1,2021 };
			readFile(infile, "input1Date.txt", date2);
			cout << "Open File :D :D " << endl;

		}
		else if (choose == 5)
		{
			fstream infile, outfile;
			Date date3{ 1,1,2021 };
			readFile(infile, "input1Date.txt", date3);
			WriteFile(outfile, "output.txt", date3);
			cout << "Successfull" << endl;

		}
		else if (choose == 6)
		{
			fstream infile, outfile;
			Date date1{ 1,1,2021 }, date2{ 1,1,2021 };
			readFile_TwoDate(infile, "inputTwoDate.txt", date1, date2);
			cout << endl << "Open File :) :)" << endl;
			compare_Date(outfile, date1, date2);

		}
		else if (choose == 7)
		{

			fstream infile, outfile;
			Date date3{ 1,1,2021 };
			readFile(infile, "input1Date.txt", date3);
			tomorrow(date3);
			WriteFile(outfile, "output.txt", date3);
			cout << "Successfull" << endl;

		}
		else if (choose == 8)
		{
			fstream infile, outfile;
			Date date3{ 1,1,2021 };
			readFile(infile, "input1Date.txt", date3);
			yesterday(date3);
			WriteFile(outfile, "output.txt", date3);
			cout << "Successfull" << endl;
		}
		else if (choose == 9)
		{

			int k;
			Date date2{ 1,1,2021 };
			fstream infile, outfile;
			readFile1K_1Date(infile, date2, k);
			IncreaseByKDay(date2, k);
			outputYYYYMMDD(outfile, date2);


		}
		else if (choose == 10)
		{


			int k;
			fstream infile, outfile;
			Date date2{ 1,1,2021 };
			readFile1K_1Date(infile, date2, k);
			DecreaseByKDay(date2, k);
			outputYYYYMMDD(outfile, date2);

		}
		else if (choose == 11)
		{



			fstream infile, outfile;
			Date date3{ 1,1,2021 };
			readFile(infile, "input1Date.txt", date3);
			outfile.open("output.txt", ios::out);
			if (!outfile)
			{
				outfile << "Erorr" << endl;
			}
			else
			{
				outfile << "Result : " << computeDistance_11SameYear(date3) << endl;
			}
			outfile.close();
		}
		else if (choose == 12)
		{


			fstream infile, outfile;
			Date date3{ 1,1,2021 };
			readFile(infile, "input1Date.txt", date3);
			outfile.open("output.txt", ios::out);
			if (!outfile)
			{
				outfile << "Erorr" << endl;
			}
			else
			{
				outfile << "DIstance : " << computeDistance_111970(date3) << endl;

			}
			outfile.close();



		}
		else if (choose == 13)
		{

			fstream infile, outfile;
			Date date1{ 1,1,2021 }, date2{ 2,1,2021 };
			readFile_TwoDate(infile, "inputTwoDate.txt", date1, date2);
			cout << endl << "Open File :) :)" << endl;
			outfile.open("output.txt", ios::out);
			if (!outfile)
			{
				outfile << "Erorr" << endl;
			}
			else
			{
				outfile << "Distance : " << computeDistanceTwoDate(date1, date2) << endl;


			}
			outfile.close();
		}
		else if (choose == 14)
		{
			fstream infile, outfile;
			Date date3{ 1,1,2021 };
			readFile(infile, "input1Date.txt", date3);
			cout << "Open File :D :D ";
			outfile.open("output.txt", ios::out);
			if (!outfile)
			{
				outfile << "Erorr" << endl;
			}
			else
			{
				compuateDateOfWeek(outfile, date);


			}
			outfile.close();

		}
		else if (choose == 0)
		{
			cout << "GOODBYE" << endl;
			break;

		}

		system("pause");
	}
}


//----------------------------------------------------------------------------------------------------

// Bai Student 


void Age(int& day, int& month, int& year, int cur_day, int cur_month, int cur_year)
{
	int monthArr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (day > cur_day)
	{
		cur_day = cur_day + monthArr[month - 1];
		cur_month = cur_month - 1;
	}

	if (month > cur_month)
	{
		cur_year = cur_year - 1;
		cur_month = cur_month + 12;
	}

	int calculated_date = cur_day - day;
	int calculated_month = cur_month - month;
	int calculated_year = cur_year - year;
	day = calculated_date;
	month = calculated_month;
	year = calculated_year;
}



void input_Student(fstream & infile,Student& student)
{
	infile.open("input1Student.txt", ios::in);
	if (!infile)
	{
		cout << "Erorr" << endl;
	}
	else
	{
		
			infile >> student.id;
			infile.ignore();
			infile.getline(student.name, 100);
			infile >> student.gpa;
			infile.ignore();
			infile.getline(student.address, 100);
			infile >> student.dob.day>>student.dob.month>>student.dob.year;
		
		
	}
	infile.close();
}
void input_2Student(fstream& infile, Student& student1,Student &student2)
{
	infile.open("input2Stuedent.txt", ios::in);
	if (!infile)
	{
		cout << "Erorr" << endl;
		return;
	}
	else
	{
		while (!infile.eof())
		{
			infile >> student1.id;
			infile.ignore();
			infile.getline(student1.name, 100);
			infile >> student1.gpa;
			infile.ignore();
			infile.getline(student1.address, 100);
			infile >> student1.dob.day >> student1.dob.month >> student1.dob.year;

			infile >> student2.id;
			infile.ignore();
			infile.getline(student2.name, 100);
			infile >> student2.gpa;
			infile.ignore();
			infile.getline(student2.address, 100);
			infile >> student2.dob.day >> student2.dob.month >> student2.dob.year;
		}
		
	}
	infile.close();

}
void outputStudent(fstream& outfile,Student student)
{
	outfile.open("outputStudent.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
	}
	else
	{
		outfile << "Fullname : " << student.name << endl;
		outfile << "ID :" << student.id << endl;
		outfile << "Address : " << student.address << endl;
		outfile << "GPA : " << student.gpa << endl;
		outfile << "Day of birth : " << student.dob.year << "\\" << student.dob.month << "\\" << student.dob.day << endl;
	}
	outfile.close();
	
}
void ExtractFirstLastName(const char fullname[], char firtname[], char lastName[])
{
	int i = 0;
	int j = 0;
	int index_lastname = 0;
	for (i = 0; i < strlen(fullname); i++)
	{
		if (fullname[i] == ' ')
		{
			break;
		}
		else
		{
			firtname[i] = fullname[i];
		}
	}
	firtname[i] = '\0';
	i++;
	for (j = i; j < strlen(fullname); j++)
	{
		lastName[index_lastname++] = fullname[j];
	}
	lastName[index_lastname] = '\0';
}
long long reversDigits(long long num)
{
	long long  rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}

void ExtractGrade(fstream& outfile,long long id)
{
	outfile.open("outputStudent.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
	}
	else
	{
		int number = reversDigits(id);
		int result = (number % 10) * 10 + ((number / 10) % 10);

		outfile << "K" << result;
	}
	
	outfile.close();
}
int support_Compare_ID(Student student1, Student student2)
{

	if (student1.id > student2.id)
	{
		return 1;
	}
	else if (student1.id < student2.id)
	{
		return 2;
	}
	else if (student1.id == student2.id)
	{
		return 3;
	}
}

void compare_ID(fstream&outfile,Student student1, Student student2)
{
	outfile.open("outputStudent.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
	}
	else
	{
		if (support_Compare_ID(student1, student2) == 1)
		{
			outfile << "ID Of Student1 > ID Of Student2" << endl;
		}
		else if (support_Compare_ID(student1, student2) == 2)
		{
			outfile << "ID Of Student1 < ID Of Student2" << endl;
		}
		else if (support_Compare_ID(student1, student2) == 3)
		{
			outfile << "ID Of Student1 = ID Of Student2" << endl;
		}
	}
	outfile.close();
}
int min(int a, int b)
{
	int min = 0;
	if (a >= b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	return min;
}


void outputStudentDetail(fstream&outfile,Student student)
{
	outfile.open("outputStudent.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
		return;
	}
	else
	{
		char firstName[100];
		int day = student.dob.day;
		int month = student.dob.month;
		int year = student.dob.year;
		char lastName[100];
		ExtractFirstLastName(student.name, firstName, lastName);
		outfile << "ID :" << student.id << endl;
		outfile << "First Name : " << firstName << endl;
		outfile << "Last Name : " << lastName << endl;
		outfile << "Address : " << student.address << endl;
		outfile << "GPA : " << student.gpa << endl;
		Age(day, month, year, 5, 12, 2021);
		outfile << "Age : " << year << " year " << month << " month " << day << " days" << endl;
	}
	outfile.close();
}
int support_compare_GPA(Student student1, Student student2)
{

	if (student1.gpa > student2.gpa)
	{
		return 1;
	}
	else if (student1.gpa < student2.gpa)
	{
		return 2;
	}
	else if (student1.gpa == student2.gpa)
	{
		return support_Compare_ID(student1, student2);
	}
}
void  compare_GPA(fstream&outfile,Student student1, Student student2)
{
	outfile.open("outputStudent.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
	}
	else
	{
		if (support_compare_GPA(student1, student2) == 1)
		{
			outfile << "GPA Of Student1 > GPA Of Student2" << endl;
		}
		else if (support_compare_GPA(student1, student2) == 2)
		{
			outfile << "GPA Of Student1 < GPA Of Student2" << endl;
		}
		else if (support_compare_GPA(student1, student2) == 3)
		{
			outfile << "GPA Of Student1 = GPA Of Student2" << endl;
			compare_ID(outfile,student1, student2);
		}
	}
	outfile.close();
	
}
void menuStudent()
{
	int choose;
	Date date{ 1,1,2021 };
	Student student{ "NGUYEN VAN A",0,0,"O DAU KHONG BIET",date };
	Student student1, student2;
	fstream outfile,infile;
	while (1)
	{
		system("cls");
		cout << "1.Input a student" << endl;
		cout << "2.Output a student: id, full name, gpa, address, dob." << endl;
		cout << "3.Output a student (Detail)" << endl;
		cout << "4.Extract the class of input student." << endl;
		cout << "5.Compare 2 students by id." << endl;
		cout << "6.Save a student to a text file." << endl;
		cout << "7.Compare 2 students by gpa, and then by id." << endl;
		cout << "0.End" << endl;
		inputNumberPositive("Choose", choose);
		cin.ignore();
		if (choose == 1)
		{
			
			input_Student(infile,student);
			outputStudent(outfile, student);
		}
		else if (choose == 2)
		{
			
			cout << "Open to see :D ";
			input_Student(infile, student);
			outputStudent(outfile,student);
		}
		else if (choose == 3)
		{
			
			input_Student(infile, student);
			outputStudentDetail(outfile,student);
		}
		else if (choose == 4)
		{
			input_Student(infile, student);
			ExtractGrade(outfile,student.id);
			cout << endl;
		}
		else if (choose == 5)
		{
			
			Student student1, student2;
			input_2Student(infile, student1, student2);
			compare_ID(outfile, student1, student2);
		}
		else if (choose == 6)
		{
			input_Student(infile, student);
			WriteFileStudent(outfile, student);
		}
		else if (choose == 7)
		{
			
			input_2Student(infile, student1, student2);
			compare_GPA( outfile, student1, student2);
		}
		else if (choose == 0)
		{
			break;
		}
		system("pause");
	}

}

void WriteFileStudent(fstream& outfile, Student s1)
{
	outfile.open("outputStudent.txt", ios::out);
	if (!outfile)
	{
		outfile << "Erorr" << endl;
	}
	else
	{
		outfile << s1.id << " " << s1.name << " " << s1.gpa << " " << s1.address << " " << s1.dob.day << " " << s1.dob.month << " " << s1.dob.year << endl;
	}
	outfile.close();
}

//================================================================================================================
// Course 
void inputCourse(fstream &infile,Course& course)
{
	infile.open("inputCourse.txt", ios::in);
	if(!infile)
	{
		cout << "Error" << endl;
		return;
	}
	else
	{
	infile.getline(course.ID, 100);
	infile.getline(course.Name, 100);
	infile >> course.sizeArr;
	cin.ignore();
	for (int i = 0; i < course.sizeArr; i++)
	{
		infile >> course.array_Student[i].id;
		infile.ignore();
		infile.getline(course.array_Student[i].name, 100);
		infile >> course.array_Student[i].gpa;
		infile.ignore();
		infile.getline(course.array_Student[i].address, 100);
		infile >> course.array_Student[i].dob.day >> course.array_Student[i].dob.month >> course.array_Student[i].dob.year;
	}
	infile.ignore();
	infile >> course.status;
	infile >> course.maximum_Student;
	infile >> course.minimum_Student;

    }
	infile.close();
}
void ouput_Course(fstream& outfile,Course course)
{
	outfile.open("outputCourse.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
		return; 
	}
	else
	{
		outfile << "---------------------------" << endl;
		outfile << " ID Course : " << course.ID << endl;
		outfile << " Name course : " << course.Name << endl;
		outfile << " Student of Array :  " << course.sizeArr << endl;
		for (int i = 0; i < course.sizeArr; i++)
		{
			cout << endl;
			outfile << "Fullname : " << course.array_Student[i].name << endl;
			outfile << "ID :" << course.array_Student[i].id << endl;
			outfile << "Address : " << course.array_Student[i].address << endl;
			outfile << "GPA : " << course.array_Student[i].gpa << endl;
			outfile << "Day of birth : " << course.array_Student[i].dob.year << "\\" << course.array_Student[i].dob.month << "\\" << course.array_Student[i].dob.day << endl;
		}
		outfile << " Status(open or close) : " << course.status << endl;
		outfile << " Maximum student in array : " << course.maximum_Student << endl;
		outfile << " Mininum student in array : " << course.minimum_Student << endl;
		outfile << "---------------------------" << endl;
	}
	outfile.close();
}
void insert_Student(Course& course, int pos, Student& student)
{
	int i = 0, c = 0;
	for (i = course.sizeArr; i > pos; i--)
	{
		course.array_Student[i] = course.array_Student[i - 1];
	}
	course.array_Student[pos] = student;
	course.sizeArr++;

}

void ReadFileToAddArr(fstream& infile, Student& student)
{
	infile.open("DataStudentAddArray.txt", ios::in);
	if (!infile)
	{
		cout << "Error!!" << endl;
		return;
	}
	else
	{
		infile >> student.id;
		infile.ignore();
		infile.getline(student.name, 100);
		infile >> student.gpa;
		infile.ignore();
		infile.getline(student.address, 100);
		infile >> student.dob.day >> student.dob.month >> student.dob.year;
	}	
	infile.close();
}

void addStudentIntoCourse(fstream&infile,fstream&outfile,Course& course)
{
	Student student;
	outfile.open("outputCourse.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
		return;
	}
	else
	{
	
		
			ReadFileToAddArr(infile, student);
			insert_Student(course, 0, student);
			if (course.sizeArr < course.maximum_Student && course.sizeArr>0)
			{
				copyStr(course.status, "Open");
			}
			else
			{
				copyStr(course.status, "Close");
			}
		
	}
	
	outfile.close();
}
void copyStr(char str1[], const char str2[])
{
	for (int i = 0; i < strlen(str2); i++)
	{
		str1[i] = str2[i];
	}
}
int find_Index_Name(Course course, long id)
{
	for (int i = 0; i < course.sizeArr; i++)
	{
		if (course.array_Student[i].id == id)
		{
			return i;
		}
	}
	return -1;
}
void readIdToRemove(fstream& infile, long long& id)
{
	infile.open("DataRemoveStudent.txt", ios::in);
	if (!infile)
	{
		cout << "Error!!" << endl;
		return;
	}
	else
	{
		infile >> id;
	}
	infile.close();
}

void WriteStudentSameId(fstream &outfile,fstream&infile, Course course)
{
	long long id;
	readIdToRemove(infile, id);
	outfile.open("SameID.txt", ios::out);
	if (!outfile)
	{
		outfile << "Erorr" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < course.sizeArr; i++)
		{
			if (course.array_Student[i].id == id)
			{
				outfile << endl;
				outfile << "Fullname : " << course.array_Student[i].name << endl;
				outfile << "ID :" << course.array_Student[i].id << endl;
				outfile << "Address : " << course.array_Student[i].address << endl;
				outfile << "GPA : " << course.array_Student[i].gpa << endl;
				outfile << "Day of birth : " << course.array_Student[i].dob.year << "\\" << course.array_Student[i].dob.month << "\\" << course.array_Student[i].dob.day << endl;
			}
		}
	}
	outfile.close();
}
void removeStudent(fstream &outfile,Course& course)
{
	fstream infile;
	outfile.open("outputCourse.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
		return;
	}
	else
	{
		if (course.sizeArr == 0)
		{
			outfile << "Array Empty" << endl;
		}
		else
		{
			long long id;
			readIdToRemove(infile, id);
			int index = find_Index_Name(course, id);
			if (index == -1)
			{
				outfile << "Array don't contain value" << endl;
			}
			else if (index < course.sizeArr && index != -1)
			{

				course.sizeArr = course.sizeArr - 1;
				for (int j = index; j < course.sizeArr; j++)
				{
					course.array_Student[j] = course.array_Student[j + 1];
				}

			}
			if (course.sizeArr < course.maximum_Student && course.sizeArr >= 0)
			{
				copyStr(course.status, "Open");
			}
			else
			{
				copyStr(course.status, "Close");
			}
		}

	}
	outfile.close();
}
void swap(Course& a, Course & b)
{
	Course temp = a;
	a = b;
	b = temp;
}
void sortGPAStudentInCourse(Course& course)
{
	for (int i = 0; i < course.sizeArr-1; i++)
	{
		for (int j = i + 1; j < course.sizeArr; j++)
		{
			if (course.array_Student[i].gpa < course.array_Student[j].gpa)
			{
				swap(course.array_Student[i], course.array_Student[j]);
			}
		}
	}
}

void WriteFileAfterSort(fstream& outfile, Course course)
{
	outfile.open("SortStudenInArray.txt", ios::out);
	if (!outfile)
	{
		outfile << "Error" << endl;
		return;

	}
	else
	{
		sortGPAStudentInCourse(course);
		for (int i = 0; i < course.sizeArr; i++)
		{
			outfile << endl;
			outfile << "Fullname : " << course.array_Student[i].name << endl;
			outfile << "ID :" << course.array_Student[i].id << endl;
			outfile << "Address : " << course.array_Student[i].address << endl;
			outfile << "GPA : " << course.array_Student[i].gpa << endl;
			outfile << "Day of birth : " << course.array_Student[i].dob.year << "\\" << course.array_Student[i].dob.month << "\\" << course.array_Student[i].dob.day << endl;
		}
	}
	outfile.close();
}

void menuCourse()
{
	int choose;
	Date date{ 1,1,2021 };
	Student student{ "NGUYEN VAN A",0,0,"O DAU KHONG BIET",date };
	Course course{ "CS16","Introduction Programming",{} , "open", 0, 0, 0 };
	fstream infile, outfile;
	while (1)
	{
		system("cls");
		cout << "1.Input a course." << endl;
		cout << "2.Ouput a course." << endl;
		cout << "3.Add a student to a course." << endl;
		cout << "4.Remove a student to a course.." << endl;
		cout << "5.Find a student by a given id. Save the answer to a text file." << endl;
		cout << "6.Sort students by gpa. Save the answers to a text file." << endl;
		cout << "0.End" << endl;
		inputNumberPositive("Choose", choose);
		cin.ignore();
		if (choose == 1)
		{
			inputCourse(infile,course);
			ouput_Course(outfile,course);
		}
		else if (choose == 2)
		{
			inputCourse(infile, course);
			ouput_Course(outfile,course);

		}
		else if (choose == 3)
		{
			
				addStudentIntoCourse(infile,outfile,course);
				ouput_Course(outfile, course);
			

		}
		else if (choose == 4)
		{
			removeStudent(outfile,course);
			ouput_Course(outfile, course);
		}
		else if (choose == 5)
		{
			WriteStudentSameId(outfile, infile, course);
		}
		else if (choose == 6)
		{
			WriteFileAfterSort(outfile, course);
		}
		else if (choose == 0)
		{
			break;
		}
		system("pause");
	}

}