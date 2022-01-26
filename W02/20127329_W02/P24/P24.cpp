#include<iostream>
#include<iomanip>
using namespace std;
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 4 1000
//Output: 25000



//Test case 2 :
// Input :  10 2000
// Ouput : 20000



//Test case 3 :
// Input :  7 8000 
// Ouput : 114286

int main()
{
	cout << "0 < percent, quota <= 10^9." << endl;
	float quota, percent;
	while (1)
	{
		cout << "Hay nhap khuyen mai va so tien khuyen mai toi da;";
		cin >> percent >> quota;
		if (percent < 0 || quota < 0)
			cout << "Hay nhap lai gia tri lon hon 0" << endl;
		else
			break;


	}
	cout << "So tien mua hang la:" <<fixed<<setprecision(2)<< quota / (percent / 100) << endl;
	return 0;
}