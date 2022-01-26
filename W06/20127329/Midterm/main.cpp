#include<iostream>
#include<string>
using namespace std;
void reverse(int& n)
{
	int tmp;
	bool first = true;
	while (n > 0) {
		tmp = n % 10;
		if (first == true) {
			if (tmp != 0) {
				cout << tmp;
				first = false;
			}
		}
		else {
			cout << tmp;
		}
		n = n / 10;
	}
}
string resversestring(string s)
{
	string result="";
	for (int i = s.length()-1; i >=0; i--)
	{
		result += s[i];
	}
	return result;
}
int tinh_Gia_Tri_Y(int id)
{

	int temp;
	string temp1="";
	string temp2 = "";
	int result;
	while (id > 0)
	{
		if ((id % 10) % 2 != 0)
		{
			temp1 += ((id % 10) + '0');
		}
		else
		{
			temp2 += ((id % 10) + '0');
		}
		id = id / 10;
	}
	temp1 = resversestring(temp1);
	temp2 = resversestring(temp2);
	string kq = temp1 +temp2;
	result = stoi(kq);
	return result;
	
}
void Output(int id,int y)
{
	cout << id << "- Bui Quang Thanh { 20CLC02 [ " << y <<"]}" <<endl;
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
int GCD(int a, int b)
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
int max(int a, int b)
{
	int max;
	a >= b ? max = a : max = b;
	return max;
}
// 20127329 17392022
int soUocNguyenTo(int id, int y)
{
	for (long i = 1; i <= 100000; i++)
	{
		if (id % i == 0 && y % i == 0&&isPrime(i))
		{
			return i;
	
		}
	}
	return -1;
}
bool isOddNumber(int a)
{
	if (a % 2 != 0)
		return true;
	return false;
}
bool isEvenNumber(int a)
{
	if (a % 2 == 0)
		return true;
	return false;
}
int tinhTongHieu(int id)
{
	int x;
	int sum_Even = 0;
	int sum_Odd = 0;
	while (id > 0)
	{
		if (isEvenNumber(id % 10))
		{
			sum_Even += (id % 10);
		}
		else
		{
			sum_Odd += (id % 10);
		}
		id = id / 10;
	}
	x = sum_Even - sum_Odd;
	return x;

}
long long pow(long long a, long long b) {
	long long result = 1;
	for (int i = 1; i <= b; i++) {
		result *= a;
	}
	return result;
}
double TinhGiaTriCauE(int x,int n)
{
	double sum = 1;
	int sum_temp=1;
	for (int i = 1; i<=n; i++)
	{
		sum_temp += 2*i;
		sum += 1.0*pow(x, 2 * i)/( sum_temp);
	}
	return sum;
}
int main()
{
	int id = 20127329;
	int n;
	int y = tinh_Gia_Tri_Y(id);   
	cout << "Tinh gia tri bien y :"<< y << endl; //cau b 
	cout << "Thong tin " << endl;
	Output(id,y); // cau c 
	int result = soUocNguyenTo(id, y); //cau d 
	if (result == -1)
	{
		cout << "So uoc nguyen to : Khong ton tai " << endl;
	}
	else
	{
		cout << "So uoc nguyen to :" << result << endl;
	}
	
	int x = tinhTongHieu(id); // cau e
	cout << "Ket qua x: " << x << endl;
	cout << "Tinh gia tri cua cau E" << endl;
	cout << "Nhap so luong n :";
	cin >> n;
	cout<<TinhGiaTriCauE(x, n); // cau f 
	
	return 0; 
}