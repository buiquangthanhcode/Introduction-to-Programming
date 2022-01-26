#include"Function.h"
void input(long& n)
{
	do
	{
		cout << "Hay nhap n :" << endl;
		cin >> n;
	} while (n < 0 || n >= 1000000000);

}
void input_Choose(int& choose)
{
	do
	{
		cout << "Hay nhap lua chon  :" << endl;
		cin >> choose;
	} while (choose < 0);

}
double P41(long n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 1 / (1 + sum);
	}
	return sum;
}

long P45(long x)
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
long P49(long x)
{
	int result = reverse(x);
	return (result % 10);

}