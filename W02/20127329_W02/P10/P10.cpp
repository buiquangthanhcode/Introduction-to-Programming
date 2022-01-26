#include<iostream>
using namespace std;
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 20 50 
// Ouput : 30


//Test case 2 :
// Input : 10 20
// Ouput : 10


//Test case 3 :
// Input : 12 20
// Ouput : 8


int main()
{
	int previous, current;
	cout << "P10: SO KWH DIEN THIEU THU" << endl;
	cout << "Chu y : 0 <= So dien thang truoc <= So dien hien tai <= 10 ^ 9." << endl;
	while (1)
	{

		cout << "Hay nhap chi so dien thang truoc :";
		cin >> previous;
		cout << "Hay nhap chi so dien cua thang hien tai :";
		cin >> current;
		if (current < 0 || previous < 0 || previous>current)
		{
			cout << "Ban da nhap sai vui long nhap lai " << endl;
		}
		else
			break;
	}
	cout << "Ket qua :" << current - previous << endl;


	return 0;
}