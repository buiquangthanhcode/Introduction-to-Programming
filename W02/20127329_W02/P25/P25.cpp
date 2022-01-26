#include<iostream>
using namespace std;
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 4 1 30 4
// Ouput : 
//Speed:2.66469
//Pace: 22.5167



//Test case 2 :
// Input :  10 2 1 1
// Ouput : 
//Speed:4.95799
//Pace: 12.1017


//Test case 3 :
// Input :  7 8 10 11
// Ouput : 
//Speed:0.856822
//Pace : 70.0262

int main()
{
	cout << "0 < km, hour, minute, second <= 10^9." << endl;
	float km, h, m, s;
	while (1)
	{
		cout << "Hay nhap so km ;";
		cin >> km;
		cout << "Hay nhap so gio ,phut va giay ";
		cin >> h >> m >> s;
		if (km < 0 || h < 0 || m < 0 || s < 0)
			cout << "Moi ban nhap lai gia tri lon hon 0 " << endl;
		else
			break;
	}
	float speed = km / (h + m / 60 + s / 3600);
	float pace = (h * 60 + m + s / 60) / km;
	cout << "Speed:" << speed << endl;
	cout << "Pace: " << pace << endl;
	return 0;

}