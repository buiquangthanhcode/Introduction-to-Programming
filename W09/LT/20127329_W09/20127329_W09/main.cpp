#include"Function.h"
int main()
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
		cout << "0.End" << endl;
		inputNumberPositive("Choose", choose);
		cin.ignore();
		if (choose == 1)
		{
			fstream infile,outfile;
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
				outputDateWithFormat(outfile,"output.txt",date, "yyyy - MM - dd");
				cout << endl;
			}
			else if (number == 2)
			{
				cout << "Open File :D :D " << endl;
				outputDateWithFormat(outfile, "output.txt",date, "MMM dd yy");
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
			compare_Date(outfile,date1, date2);

		}
		else if (choose == 0)
		{
			cout << "GOODBYE" << endl;
			break;

		}

		system("pause");
	}
	return 0;
}