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
		cout << "4.P05-Sap Xep Cac So Chan Tang Dan" << endl;
		cout << "5.P06-Kiem Tra Thu Tu Trong Mang" << endl;
		cout << "6.P09-Dem Cac Phan Tu Khac Nhau Trong Mang "<< endl;
		cout << "7.P12-Tim Phan Tu Lon Thu 2 Trong Mang " << endl;
		cout << "8.Dao Nguoc Mang " << endl;
		cout << "9.Tron 2 Mang Khong Giam" << endl;
		cout << "10. Cac Phan Tu Xuat Hien Tren Hai Mang" << endl;
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
		else if (choose == 4)
		{
			int n;
			int a[101];
			input("n", n);
			inputArray(a, n);
			P05_Sort_Even_Acsending(a,n);
			output(a, n);
		}
		else if (choose == 5)
		{
			int n;
			bool Flag_In = 0;
			bool Flag_De = 0;
			bool Flag_Equal = 0;
			int a[101];
			input("n", n);
			inputArray(a, n);
			P06_Check_Order_Array(a, n, Flag_In, Flag_De, Flag_Equal);
			if (Flag_In == 1 && Flag_De == 1|| Flag_Equal ==1||n==1)
			{
				cout << "Khong Tang Khong Giam" << endl;
			}
			else if (Flag_De == 1&& Flag_Equal==0)
			{
				cout << "Mang Giam" << endl;
			}
			else if (Flag_In == 1&& Flag_Equal==0)
			{
				cout << "Mang Tang " << endl;
			}
	
			
		}
		else if (choose == 6)
		{
			int n;
			int a[101];
			input("n", n);
			inputArray(a, n);
			cout << "So luong Chu So Khac Nhau : " << P09_Count_Number_Difference( a,  n) << endl;
			
		}
		else if (choose == 7)
		{
			int n;
			int a[101];
			input("n", n);
			inputArray(a, n);
			cout << "So Lon Thu Hai Trong Mang : " << P12_Find_Max_Second(a, n) << endl;

		}
		else if (choose == 8)
		{
			int n;
			int a[101];
			input("n", n);
			inputArray(a, n);
			P15_Reverse_Array(a, n);
			cout << "Mang Sau khi Dao La :";
			output(a, n);
		}
		else if (choose == 9)
		{
			int sizeA,sizeB,sizeC;
			int a[101];
			int b[101];
			int c[202];
			input("sizeA", sizeA);
			inputArray(a, sizeA);
			input("sizeB", sizeB);
			inputArray(b, sizeB);
			P25_Merge_2_Array_No_Decsending(a,b,c,sizeA,sizeB,sizeC);
			cout << "Mang Sau khi Khop La :";
			output(c, sizeC);
		}
		else if (choose == 10)
		{
		int sizeA=0, sizeB,sizeC;
		int a[101];
		int b[101];
		int c[202];
		input("sizeA", sizeA);
		inputArray(a, sizeA);
		input("sizeB", sizeB);
		inputArray(b, sizeB);
		P26_Two_Item_Contain_2_Array(a, b,c,sizeA, sizeB,sizeC);
		cout << "Danh Sach So Bi Trung : ";
		output(c, sizeC);
		}
		else if (choose == 0)
		{
			cout << "Tam Biet Thay" << endl;
			break;
		}
	
		system("Pause");
	}
	return 0; 
}