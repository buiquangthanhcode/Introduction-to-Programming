#include"Function.h"
int main()
{

	int lc; 
	while (1)
	{
		system("cls");
		cout << "1.DATE" << endl;
		cout << "2.STUDENT" << endl;
		cout << "3.COURSE" << endl;
		cout << "0.KET THUC" << endl;
		cout << "Hay nhap lua chon " << endl;
		cin >> lc;
		if (lc == 1)
		{
			menuDate();
		}
		else if (lc == 2)
		{
			menuStudent();
		}
		else if (lc == 3)
		{
			menuCourse();
		}
		else if (lc == 0)
		{
			cout << "GOOD BYE" << endl;
			break;
		}
		system("pause");
	}

	return 0;
}