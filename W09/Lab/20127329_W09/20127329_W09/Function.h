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
void compuateDateOfWeek(fstream& outfile, Date date);
void readDayOfWeek(fstream&outfile,int number);
int computeDistance_111970(Date date);
int computeDistance_11SameYear(Date date);
int computeDistanceTwoDate(Date date1, Date date2);
int computeDistance(int day, int month, int year, int cur_day, int cur_month, int cur_year);
void tomorrow(Date& date);
void yesterday(Date& date);
void IncreaseByKDay(Date& date, int n);
void DecreaseByKDay(Date& date, int n);
void WriteFileStr(const char s[], fstream& outfile);
void readFile1K_1Date(fstream& infile, Date& date, int& k);
void menuDate();


//------------------------------------------------------------
struct Student
{
	char name[100];
	long long id;
	float gpa;
	char address[100];
	Date dob;
};
void input_Student(fstream &infile,Student& student);
void outputStudent(fstream& outfile, Student student);
void outputStudentDetail(fstream&outilfe,Student student);
void ExtractFirstLastName(const char fullname[], char firtname[], char lastName[]);
void Age(int& day, int& month, int& year, int cur_day, int cur_month, int cur_year);
long long reversDigits(long long num);
void ExtractGrade(fstream& outfile, long long id);
void input_2Student(fstream& infile, Student& student1, Student& student2);
int countNumber(int number);
int support_Compare_ID(Student student1, Student student2);
void compare_ID(fstream&outfile,Student student1, Student student2);
int min(int a, int b);
void WriteFileStudent(fstream& outfile, Student s1);
int support_compare_GPA(Student student1, Student student2);
void  compare_GPA(fstream& outfile, Student student1, Student student2);
void menuStudent();

// -------------------------------------------------------------------

struct Course
{
	char ID[100];
	char Name[100];
	Student array_Student[100];
	char status[10];
	int sizeArr;
	int maximum_Student;
	int minimum_Student;
};
void inputCourse(fstream& infile, Course& course);
void ouput_Course(fstream& outfile, Course course);
void insert_Student(Course& course, int pos, Student& student);
void addStudentIntoCourse(fstream& infile, fstream& outfile, Course& course);
int find_Index_Name(Course course, long id);
void removeStudent(fstream& outfile, Course& course);
void copyStr(char str1[], const char str2[]);
void menuCourse();
void readIdToRemove(fstream& infile, long long& id);
void WriteStudentSameId(fstream& outfile, fstream& infile, Course course);
void sortGPAStudentInCourse(Course& course);
void swap(Course& a, Course& b);
void WriteFileAfterSort(fstream& outfile, Course course);