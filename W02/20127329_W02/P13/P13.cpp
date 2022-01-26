#include<iostream>
using namespace std;
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 20 50 60
// Ouput : 
//Chu vi tam giac la :130
//Dien tich tam giac la : 468.375



//Test case 2 :
// Input :  4 5 6 
// Ouput : 
//Chu vi tam giac la : 15
//Dien tich tam giac la : 9.92157


//Test case 3 :
// Input :  7 8 10
// Ouput : 
//Chu vi tam giac la :26
//Dien tich tam giac la : 30.5941

int main()
{
	float a, b, c;
	cout << "Chu y: 0 < edge1, edge2, edge3 <= 10^9." << endl;
	while (1)
	{
		cout << "Hay nhap 3 canh a,b,c cua 1 tam giac" << endl;
		cin >> a >> b >> c;
		if (a < 0 || b < 0 || c < 0)
		{
			cout << "Hay nhap lai " << endl;
		}
		else
		{
			break;
		}
	}
	cout << "Chu vi tam giac la :" << a + b + c << endl;
	float P = (a + b + c) / 2;
	float S = sqrt(P * (P - a) * (P - b) * (P - c));
	cout << "Dien tich tam giac la :" << S << endl;
	return 0;
}