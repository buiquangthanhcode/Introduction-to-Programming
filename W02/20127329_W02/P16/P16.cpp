#include<iostream>
using namespace std;
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 12346
//Output: 6



//Test case 2 :
// Input :  12654
// Ouput : 8



//Test case 3 :
// Input :  12351
// Ouput : 2
int main()
{
	cout << "10000 <= input <= 99999." << endl;
	int x, sum = 0;
	while (1)
	{
		cout << "Hay nhap bien so xe :";
		cin >> x;
		if (x < 0)
			cout << "Hay nhap lai " << endl;
		else
			break;
	}
	while (x > 0)
	{
		sum += (x % 10);
		x = x / 10;
	}
	cout << "So nut cua bien so xe la :" << sum % 10 << endl;

	return 0;
}