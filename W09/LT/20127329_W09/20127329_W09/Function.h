#pragma once
#pragma once
#include<iostream>
#include<fstream>
using namespace std;
struct Date
{
	int day;
	int month;
	int year;
};
void inputNumberPositive(const char s[], int& n);
bool checkLeapYear(int year);
bool checkInput(int day, int month, int year);
int countNumber(int number);
void outputYYYYMMDD(fstream& outfile, Date date);
void outputDateWithFormat(fstream& outfile, const char namefile[], Date date1, const char str[]);
void ouputMonthText(fstream& outfile, int month);
int TwoNumberEndOfYear(int year);
void readFile(fstream& infile, const char namefile[], Date& date);
void outputZeroAtHead_Fstream(fstream& outfile, int number);
void WriteFile(fstream& outfile, const char namefile[], Date& date);
void readFile_TwoDate(fstream& infile, const char namefile[], Date& date1, Date& date2);
int compare2Date(Date date1, Date date2);
void compare_Date(fstream& outfile, Date date1, Date date2);