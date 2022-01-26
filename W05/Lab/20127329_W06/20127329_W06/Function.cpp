#include"Function.h"
void input(long& n)
{
	do
	{
		cout << "Hay nhap so :"  ;
		cin >> n;
	} while (n < 0 || n >= 1000000000);

}
void input_Double(double& x)
{
	do
	{
		cout << "Hay nhap so :";
		cin >> x;
	} while (x >= 1000000000);
}
void input_x(long& x)
{
	do
	{
		cout << "Hay nhap x :" << endl;
		cin >> x;
	} while (x < 0 || x >= 1000000000);

}
void input_Positive(int& choose)
{
	do
	{
		cin >> choose;
	} while (choose < 0);

}
void input_Day_Month_Year(int& day, int& month, int& year)
{
	while (1)
	{
		cout << "Hay nhap ngay :";
		input_Positive(day);
		cout << "Hay nhap thang :";
		input_Positive(month);
		cout << "Hay nhap nam :";
		input_Positive(year);

		if ((checkLeapYear(year) == 1 && day > 29 && month == 2 )|| day > 32 || day <= 0 || month <= 0 || month > 12 || year < 0 || checkLeapYear(year) == 0 && day >= 29 && month == 2|| check_Day(day,month)==0)
		{

			cout << "Nhap khong dung vui long nhap lai !!!" << endl;
		}
		else
			break;
	}

}
double P41_Tinh_Tong(long n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 1 / (1 + sum);
	}
	return sum;
}

long P45_Tich_Cac_Chu_So(long x)
{
	int muil = 1;
	int temp = 0;
	while (x > 0)
	{
		muil = muil * (x % 10);
		x = x / 10;
	}
	return muil;
}

long P49_Chu_So_Dau_Tien(long x)
{
	int result = reverse(x);
	return (result % 10);

}

int P53_So_Luong_Chu_Cai_Lon_Nhat(long n)
{
	int _max = INT16_MIN;
	int count = 0;
	int temp = n;
	while (n > 0)
	{
		if ((n % 10) > _max)
		{
			_max = n % 10;
			count = 0;
		}
		else if ((n % 10) == _max)
		{
			count++;
		}
		n = n / 10;
	}

	if (countNumber(temp) == ++count||--count==0) //9999999 or  1234 or 431
	{
		return 1;
	}
	else 
		return count+1;
}

bool P57_So_Doi_Xung(long x)
{
	long temp = reverse(x);
	return (temp == x) ? true : false;
}

long P61_Boi_Chung_Nho_Nhat(long x,long y)
{
	return LCM(x, y);
}

long P65_Tinh_Tong(long x, long n)
{
	long sum = x;
	// n=1
	for (int i = 1; i <= n; i++)
	{
		sum = sum+(Pow(-1, i) * Pow(x, (2 * i) + 1));
	}
	return sum;
}

double P69_Tinh_Tong(long x, long n)
{
	double sum = -1;
	long muil = 1;
	for (long i = 1; i <= n; i++)
	{
		long GT = giaiThua(2 * i);
		sum = sum + 1.0*pow(-1, i + 1) *pow(x, ((2 * i)))/GT;
	}
	return sum;
}




int P73_Tinh_Khoang_Cach_Giua_Hai_Ngay(int day, int month, int year, int cur_day, int cur_month, int cur_year)
{
	int distance = 0;
	if (checkLeapYear(year) == 1 && day > 29 && month == 2 || day > 32 || day <= 0 || month <= 0 || month > 12 || year < 0 || checkLeapYear(year) == 0 && day >= 29 && month == 2)
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

void P77_Tru_Di_N_Ngay(int& day, int& month, int& year,long n)
{
	int temp = n;
	(day == 1) ? temp = --n : temp = n;
		while (temp--)
		{
			day--;
			if (day == 0 && (month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
			{
				day = 30;
				month--;
			}
			else if (day == 0 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			{
				day = 31;
				month--;
			}
			else
			{
				if (day == 0 && month == 3)
				{
					if (checkLeapYear(year))
					{
						day = 29;
					}
					else
					{
						day = 28;
					}
					month--;
				}
				if (day == 0 && month == 1)
				{
					day = 31;
					month = 12;
					year--;
				}

			}
		
		}
	
}
		


int solveQuadratic(double a, double b, double c, double& x1, double& x2)
{
	int nSolution;
	x1 = x2 = 0;
	if (a == 0)
	{
		nSolution = PT_Bac_1(b, c, x1);
	}
	else
	{
		double Delta = (b * b) - (4 * a * c);
		if (Delta < 0)
		{
			nSolution = 0;
		}
		else if (Delta == 0)
		{
			x1 = x2 = (-b / (2 * a));
			nSolution = 1;
		}
		else
		{

			x1 = (-b - sqrt(Delta)) / (2 * a);
			x2 = (-b + sqrt(Delta)) / (2 * a);
			nSolution = 2;

		}

	}
	return nSolution;
}
void tomorrow(int day1, int month1, int year1, int& day2, int& month2, int& year2)
{
	day2 = day1;
	month2 = month1;
	year2 = year1;
	day2++;
		if (day2 == 32 && (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12))
		{
			day2 = 1;
			month2++;
			if (month2 == 13)
			{
				day2 = month2 = 1;
				year2++;
			}
		}
		else if (day2 == 31 && (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11))
		{
			day2 = 1;
			month2++;
		}
		else if (checkLeapYear(year2) && day2 == 30 && month2 == 2)
		{
			day2 = 1;
			month2++;
		}
		else if (checkLeapYear(year2) == 0 && day2 == 29 && month2 == 2)
		{
			day2 = 1;
			month2++;
		}
		
	}

long reverse(long x)
{
	int sum = 0;
	while (x > 0)
	{
		sum = sum * 10 + (x % 10);
		x = x / 10;
	}
	return sum;
}
long GCD(long a, long b)
{

	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

long LCM(long a, long b)
{
	long lcm = a * b / GCD(a, b);
	return lcm;
}
long long Pow(long x, long y)
{
	long result = 1;
	for (long i = 0; i < y; i++)
	{
		result *= x;
	}
	return result;
}
long giaiThua(long n)
{
	long giai_thua = 1;
	for (long i = 1; i <= n; i++)
		giai_thua *= i;
	return giai_thua;
}
int checkLeapYear(int nam)
{
	return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}
int PT_Bac_1(double a, double b, double& x)
{
	int nSolution;
	if (a != 0)
	{
		x = -b / a;
		nSolution = 1;
	}
	else
	{
		if (b == 0)
		{
			nSolution = -1;
		}
		else
		{
			nSolution = 0;
		}
	}
	return nSolution;
}
bool check_Day(int day, int month)
{
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
int countNumber(long number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number = number / 10;
	}
	return count;
}