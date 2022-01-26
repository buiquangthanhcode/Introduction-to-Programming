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
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void P05_Sort_Even_Acsending(int a[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n-1; j++)
		{
			if (a[j] % 2 == 0 && a[j]<=a[i] && a[i]%2==0)
			{
				swap(a[i], a[j]);
			}
		}
		
	}
}
void P06_Check_Order_Array(int a[], int n, bool& flag_In, bool& flag_De,bool& flag_Equal)
{
	
	for (int i = n-1; i >0 ; i--)
	{
		if (a[i] > a[i - 1])
		{
			flag_In = 1;
		}
		else if (a[i] < a[i - 1])
		{
			flag_De = 1;
		}
		else if (a[i] == a[i - 1])
		{
			flag_Equal = 1;
		}
	}
}
void removeNumber(int numbers[], int idx, int& size)
{
	int i;
	for (i = idx; i < size - 1; i++)
		numbers[i] = numbers[i + 1];
	size--;
}

void removeDuplicate(int numbers[], int& size)
{
	int i, j;
	int number;
	for (i = 0; i < size; i++)
	{
		number = numbers[i];
		for (j = i + 1; j < size; j++)
		{
			if (number == numbers[j])
			{
				removeNumber(numbers, j, size); j--;
			}
		}
	}
}
int count_Number_InArray(int a[], int n )
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		count++;
	}
	return count;
}
int P09_Count_Number_Difference(int a[], int n)
{
	int res = 1;
	removeDuplicate(a, n);
	int reuslt =count_Number_InArray(a, n);
	return reuslt;
}
void Acsending(int a[], int n) {
	int tg;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
void Descending(int a[], int n) {
	int tg;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {

				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}

int P12_Find_Max_Second(int a[], int n)
{

	Descending(a, n);
	return a[1];
	
}
void P15_Reverse_Array(int a[], int n)
{
	int temp = n-1;
	for (int i = 0; i < n/2; i++)
	{
		swap(a[i], a[temp--]);
	}
}
int Max(int a, int b)
{
	int max = 0;
	a > b ? max = a : max = b;
	return max;
}
int Min(int a, int b)
{
	int min = 0;
	a <b ? min = a : min = b;
	return min;
}
void P25_Merge_2_Array_No_Decsending(int a[],int b[],int c[],int sizeA,int sizeB,int &sizeC)
{
	int index = 0;
	int i = 0;
	for (i = 0; i < sizeA; i++) {
		c[index] = a[i];
		index++;
	}
	for (i = 0; i < sizeB; i++) {
		c[index] = b[i];
		index++;
	}
	sizeC = index;
	Acsending(c, sizeC);
}
void P26_Two_Item_Contain_2_Array(int a[], int b[],int c[], int sizeA, int sizeB,int &sizeC)
{
	removeDuplicate(a, sizeA);
	removeDuplicate(b, sizeB);
	int i = 0;
	int index = 0;
	while (i < sizeA )
	{
		for (int k=0; k < sizeB; k++)
		{
			if (a[i] == b[k])
			{
				c[index++] = a[i];
			}
		}
		i++;

	}
	sizeC = index;
	
}
void output(int a[], int n)
{
	if (n == 0)
	{
		cout << "Khong Co Gia Tri" << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
	
}