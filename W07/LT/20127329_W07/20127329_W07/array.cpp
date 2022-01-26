#include"array.h"
void input(const char s[], int& n)
{
	while (1)
	{
		cout << "Nhap "<<s<<": "; 
		cin >> n;
		if (n <0||n>100)
		{
			cout << "Vui long nhap lai " << endl;
		}
		else
			break;
	}
}
void inputArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Arr[" << i << "] =";
		cin >> a[i];
	}
}
void Find_Max_Min(int a[], int n,int &Max,int &Min)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= Max &&a[i]%2==0)
		{
			Max = a[i];
			
		}
		else
		{
			if (a[i] <= Min && a[i] % 2 != 0)
			{
				Min = a[i];
			}
		}
	}
}
void P01_Find_Number_Max_Min(int a[], int n, int& countMax, int& countMin)
{
	int max=INT16_MIN, min=INT16_MAX;
	Find_Max_Min(a, n, max, min);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == max)
		{
			countMax++;
		}
		else if (a[i] == min)
		{
			countMin++;
		}
	}
	if (countMax == 0 || countMin == 0)
	{
		countMax = countMin = 1;

	}
}
double  P02_Tim_Trung_Binh_Cong_So_Chan(int a[], int n)
{
	double sum=0;
	int count_Even = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum += a[i];
			count_Even++;
		}
	}
	if (count_Even == 0)
		return 0;
	return 1.0 * (sum / count_Even);
}
void P04_Find_Prime_Number(int a[], int n, bool& flag)
{
	flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(a[i]))
		{
			cout << a[i] << " ";
			flag = 1;
		}
			
	}
}
bool isPrime(int n)
{
	
	if (n <= 1)
		return false;

	
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}