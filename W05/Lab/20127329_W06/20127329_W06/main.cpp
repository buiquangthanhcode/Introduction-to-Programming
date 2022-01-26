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
		cout << "4.P53-SO LUONG CHU CAI LON NHAT " << endl;
		cout << "5.P57-SO DOI XUNG " << endl;
		cout << "6.P61-BOI CHUNG NHO NHAT " << endl;
		cout << "7.P65-TINH TONG  " << endl;
		cout << "8.P69-TINH TONG  " << endl;
		cout << "9.P73.TINH KHOANH CACH GIUA HAI NGAY" << endl;
		cout << "10.P77. TRU DI N NGAY " << endl;
		cout << "11.GIAI PHUONG TRINH BAC 2 " << endl;
		cout << "12.TIM NGAY MAI  " << endl;
		cout << "0.End" << endl;
		cout << "HAY NHAP LUA CHON" << endl;
		input_Positive(choose);
		if (choose == 1)
		{
			long x, n;
			input(n);
			cout << "Ket qua tinh tong la :" << fixed << setprecision(2) << P41_Tinh_Tong(n) << endl;
		}
		else if (choose == 2)
		{
			long x, n;
			input(n);
			cout << "Ket qua tich cac chu so la : " << P45_Tich_Cac_Chu_So(n) << endl;
		}
		else if (choose == 3)
		{
			long x, n;
			input(n);
			cout << "Chu so dau tien la : " << P49_Chu_So_Dau_Tien(n) << endl;
		}
		else if (choose == 4)
		{
			long n;
			input(n);
			cout << "So luong chu cai lon nhat " << P53_So_Luong_Chu_Cai_Lon_Nhat(n) << endl;
		}
		else if (choose == 5)
		{
			long n;
			input(n);
			if (P57_So_Doi_Xung(n))
			{
				cout << "La so doi xung" << endl;
			}
			else
				cout << "Khong phai so doi xung " << endl;
		}
		else if (choose == 6)
		{
			long n, x;
			input(n);
			input_x(x);
			cout << "BOI CHUNG NHO NHAT CUA HAI SO LA :" << P61_Boi_Chung_Nho_Nhat(n, x) << endl;

		}
		else if (choose == 7)
		{
			long n, x;
			input_x(x);
			input(n);

			cout << "KET QUA TINH TONG LA :" << fixed << setprecision(2) << P65_Tinh_Tong(x, n) << endl;

		}
		else if (choose == 8)
		{
			long n, x;
			input_x(x);
			input(n);
			cout << "KET QUA TINH TONG LA :" << fixed << setprecision(2) << P69_Tinh_Tong(x, n) << endl;

		}
		else if (choose == 9)
		{

			int day = 20, month = 11, year = 2019;
			int day_des = 25, month_des = 11, year_des = 2020;
			input_Day_Month_Year(day, month, year);
			cout << "NHAP DINH DANG NGAY THANG MUON TINH KHOANG CACH" << endl;
			input_Day_Month_Year(day_des, month_des, year_des);
			cout << "KHOANg CACH GIUA HAI NGAY LA : " << P73_Tinh_Khoang_Cach_Giua_Hai_Ngay(day, month, year, day_des, month_des, year_des) << endl;
		}
		else if (choose == 10)
		{

			int day, month, year;
			long n;
			input_Day_Month_Year(day, month, year);
			cout << "NHAP N NGAY MUON TRU DI " << endl;
			input(n);
			P77_Tru_Di_N_Ngay(day, month, year, n);
			cout << "Ket qua co dang :";
			cout << day << " " << month << " " << year << endl;
		}
		else if (choose == 11)
		{
			double a, b, c,  x1, x2;
			cout << "a : ";
			input_Double(a);
			cout << "b : ";
			input_Double(b);
			cout << "c : ";
			input_Double(c);
			if (solveQuadratic(a, b, c, x1, x2) == 0)
			{
				cout << "PHUONG TRINH VO NGHIEM " << endl;
			}
			else if (solveQuadratic(a, b, c, x1, x2) == 1)
			{
				cout << "PHUONG TRINH CO 1 NGHIEM DUY NHAT : " << x1 << endl;
			}
			else if (solveQuadratic(a, b, c, x1, x2) == 2)
			{
				cout << "PHUONG TRINH CO 2 NGHIEM PHAN BIET  : " << x1 <<"||" <<x2<< endl;
			}
			else 
			{
				cout << "PHUONG TRINH VO SO NGHIEM " << endl;
			}
		}
		else if (choose == 12)
		{
			int day1, month1, year1;
			int day2, month2, year2;
			input_Day_Month_Year(day1, month1, year1);
			tomorrow(day1, month1, year1, day2, month2, year2);
			cout << "Ngay ke tiep la :" << " ";
			cout << day2 << " " << month2 << " " << year2 << endl;
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