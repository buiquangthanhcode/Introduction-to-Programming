#include"array.h"
int main()
{
	int choose;
	while (1)
	{
		system("cls");
		cout << "1.P01- TIM SO LUONG SO LON NHAT VA NHO NHAT " << endl;
		cout << "2.P02-TINH TRUNG BINH CONG CAC SO CHAN " << endl;
		cout << "3.P04-TIM CAC SO NGUYEN TO " << endl;
		cout << "0.END " << endl;
		input("Lua Chon ", choose);
		if (choose == 1)
		{
			int n;
			int a[101];
			int countMax = 0, countMin = 0;
			input("n", n);
			inputArray(a, n);
	
			P01_Find_Number_Max_Min(a, n, countMax, countMin);
			cout << "Ket qua So luong so lon nhat :" << countMax << endl;
			cout << "Ket qua So luong so be nhat : " << countMin << endl;
		}
		else if (choose == 2)
		{
			int n;
			int a[101];
			input("n", n);
			inputArray(a, n);
			cout << fixed << setprecision(2) << "Tong so chan trong mang la : " << P02_Tim_Trung_Binh_Cong_So_Chan(a, n) << endl;
		
		}
		else if (choose == 3)
		{
			int n;
			int a[101];
			bool flag = 0;
			input("n", n);
			inputArray(a, n);
			cout << "Cac so nguyen to trong mang la :";
			P04_Find_Prime_Number(a, n,flag);
			if (flag == 0)
				cout << "Khong co so nguyen to " << endl;
			cout << endl;
		}
		else if (choose == 0)
		{
			cout << "Tam Biet Thay" << endl;
			break;
		}
		else if (choose>4)
		{
			cout << "Vui long nhap tu 0 - 3 " << endl;
		}
		system("Pause");
	}
	return 0; 
}