#include<iostream>
#include <iomanip>
using namespace std;

// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input: 1.78
//Ouput:  2.0
// Test Case 2
//Input: 2.44
//Ouput: 2.5

// Test Case 3
//Input:  1.67
//Ouput: 1.5
int main()

{
	float x;
	while (1)
	{
		cout << "Hay nhap so thuc x :" << endl;
		cin >> x;
		if (x<0 || x>pow(10, 9))
		{
			cout << "Moi ban nhap lai " << endl;
		}
		else
			break;
	}
	
	float temp = x - (int)x; 
	 x = x - temp; 
	if (temp >= 0 && temp < 0.25)
	{
		x = x;
	}
	else if (temp >= 0.25 && temp < 0.5)
	{
		x = x + 0.5;
	}
	else if ((temp >= 0.5 && temp < 0.75))
	{
		x = x + 0.5;
	}
	else if (temp>=0.75 &&temp<1.0)
	{
		x = x + 1;
	}
	else
	{
		x += 1;
	}
	
	cout <<"Ket qua sai khi lam tron la :"<< fixed << setprecision(1) << x << endl;
	return 0; 
}