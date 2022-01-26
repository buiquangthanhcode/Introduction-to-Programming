#include<iostream>
using namespace std;

// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input:150 1 1 
//Ouput: 151
// Test Case 2
//Input: 6000 3 0.5
//Ouput: 6090

// Test Case 3
//Input:  10000000 5 1.8
//Ouput: 10932985
int main()
{
	int balance, month;
	float rate;
	while (1)
	{
		cout << "Hay  nhap so tien gui  , so thang gui va lai suat " << endl;
		cin >> balance >> month >> rate;
		if (balance < 0 || rate <= 0 || rate>=100 || month < 0)
		{
			cout << "Khong hop le vui long nhap lai " << endl;
		}
		else
			break;

	}
	for (int i = 0; i < month; i++)
	{
		balance = balance + (balance * (1.0*rate / 100));
	}
	cout <<"So tien lai  la :" << balance << endl;

	return 0;
}