#include<iostream>
using namespace std;
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 1000000
//Output: 
//500000 : 2
//200000 : 0
//100000 : 0
//50000 : 0
//20000 : 0
//10000 : 0
//5000 : 0
//2000 : 0
//1000 : 0



//Test case 2 :
// Input :  12000
// Ouput : 
//500000 : 0
//200000 : 0
//100000 : 0
//50000 : 0
//20000 : 0
//10000 : 1
//5000 : 0
//2000 : 1
//1000 : 0



//Test case 3 :
// Input : 87000
// Ouput :
//500000 : 0
//200000 : 0
//100000 : 0
//50000 : 1
//20000 : 1
//10000 : 1
//5000 : 1
//2000 : 1
//1000 : 0
int main()
{
	cout << "0 < Input <= 10^9" << endl;
	int money;
	while (1)
	{
		cout << "Hay nhap so tien muon doi :";
		cin >> money;
		if (money < 0)
		{
			cout << "Hay nhap lai " << endl;
		}
		else
			break;
	}
	int money_500k = money / 500000;
	money = money % 500000;
	int money_200k = money / 200000;
	money = money % 200000;
	int money_100k = money / 100000;
	money = money % 100000;
	int money_50k = money / 50000;
	money = money % 50000;
	int money_20k = money / 20000;
	money = money % 20000;
	int money_10k = money / 10000;
	money = money % 10000;
	int money_5k = money / 5000;
	money = money % 5000;
	int money_2k = money / 2000;
	money = money % 2000;
	int money_1k = money / 1000;


	cout << "500000 : " << money_500k << endl;
	cout << "200000 : " << money_200k << endl;
	cout << "100000 : " << money_100k << endl;
	cout << "50000  : " << money_50k << endl;
	cout << "20000  : " << money_20k << endl;
	cout << "10000  : " << money_10k << endl;
	cout << "5000   : " << money_5k << endl;
	cout << "2000   : " << money_2k << endl;
	cout << "1000   : " << money_1k << endl;


	return 0;



}