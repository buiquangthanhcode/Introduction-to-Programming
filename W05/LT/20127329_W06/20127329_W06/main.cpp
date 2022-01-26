#include"Function.h"
int main()
{
	int choose;
	do
	{
		system("cls");
		cout << "1.P41-TINH TONG " << endl;
		cout << "2.P45-TICH CAC CHU SO" << endl;
		cout << "3.P49-CHU SO DAU TIEN " << endl;
		cout << "0.End" << endl;
		input_Choose(choose);
		if (choose == 1)
		{
			long x, n;
			input(n);
			cout << "Ket qua tinh tong la :" << fixed << setprecision(2) << P41(n) << endl;
		}
		else if (choose == 2)
		{
			long x, n;
			input(n);
			cout << "Ket qua tich cac chu so la : " << P45(n) << endl;
		}
		else if (choose == 3)
		{
			long x, n;
			input(n);
			cout << "Chu so dau tien la : " << P49(n) << endl;
		}
		else if (choose > 3 || choose < 0)
		{
			cout << "Vui long nhap tu 0-3" << endl;
		}
		else if (choose == 0)
		{
			cout << "CHAO TAM BIET" << endl;
			break;
		}
		system("PAUSE");
	} while (choose >= 0);
	return 0;
}