#include<iostream>
using namespace std;
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 1 2 3 
// Ouput : 2 3 1 


//Test case 2 :
// Input : 4 5 6
// Ouput : 5 6 4 


//Test case 3 :
// Input : 12 20 90
// Ouput : 20 90 12

int main()
{
	cout << "0 < a, b, c <= 10^9." << endl;
	int a, b, c;
	while (1)
	{
		cout << "Hay nhap ba so a,b,c:";
		cin >> a >> b >> c;
		if (a < 0 || b < 0 || c < 0)
		{
			cout << "Hay nhap lai so lon hon 0 " << endl;
		}
		else
			break;
	}
	b = a + b + c;
	a = b - (a + c);
	c = b - (a + c);
	b = b - (a + c);
	cout << "3 so sau khi doi cho la " << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}