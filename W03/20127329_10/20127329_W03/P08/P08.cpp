#include<iostream>
#include <iomanip>
using namespace std;
// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input: 1 2
//Ouput: -2.00

// Test Case 2
//Input: 0 0 
//Ouput: Phuong trinh vo so nghiem

// Test Case 3
//Input:  0 1
//Ouput:  Phuong trinh vo nghiem 
int main()
{
	//ax+b=0
	float a, b;
	while (1)
	{
		cout << " -10^9 <= a, b <= 10^9." << endl;
		cout << "Hay nhap he so a,b : ";
		cin >> a >> b;
		if (a > pow(10, 9) || a < pow(-10, 9) || (b > pow(10, 9) || b < pow(-10, 9)))
		{
			cout<<"VUi long nhap lai "<<endl;
		}
		else 
			break;
	}
	
	if (a == 0)
	{
		if (b == 0)
			cout << "Phuong trinh vo so nghiem" << endl;
		else
			cout << "Phuong trinh vo nghiem " << endl;
	}
	else if (a != 0)
	{
		float temp = (-b) / a;
		if (temp == -0)  temp = 0;
		cout << "Phuong trinh co 1 nghiem x =" << fixed << setprecision(2) << temp << endl;
		
	}
	else
	{
		cout << "Invalid" << endl;
	}
	return 0; 
}