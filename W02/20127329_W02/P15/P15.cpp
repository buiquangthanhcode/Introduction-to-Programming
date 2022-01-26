#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define PI 3.14
#define e 2.71
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 5
// Ouput :
//Ket qua cua y1 la : 611.2136230469
//Ket qua cua y2 la : 0.0002405389

//Test case 2 :
// Input : 1
// Ouput :
//Ket qua cua y1 la : 60.0000000000
//Ket qua cua y2 la : 0.1758440286

//Test case 3 :
// Input : 0
// Ouput :
//Ket qua cua y1 la : 4.0000000000
//Ket qua cua y2 la : 0.5000000000

int pow_2(int x, int y)
{
	int result = 1.0;
	while (y > 0)
	{
		result *= x;
		y--;

	}
	return result;
}
int main()
{
	cout << "P15 .TINH GIA TRI" << endl;
	cout << "Chu y :0 <= x <= 10^9." << endl;
	float x;
	while (1)
	{
		cout << "Hay nhap so thuc khong am x :";
		cin >> x;
		if (x < 0)
		{
			cout << "Ban da nhap sai vui long nhap lai " << endl;

		}
		else
			break;
	}
	float y1 = 4 * ((x * x) + (10 * x * sqrt(x)) + (3 * x) + 1);
	float y2 = (sin(PI * x * x) + sqrt(x * x + 1)) / (pow(e, 2 * x) + cos((PI / 4) * x));

	cout << fixed << setprecision(10) << "Ket qua cua y1 la:" << y1 << endl;

	cout << fixed << setprecision(10) << "Ket qua cua y2 la:" << y2 << endl;


	return 0;
}