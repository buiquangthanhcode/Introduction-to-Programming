#include<iostream>
using namespace std;
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 20 50 
// Ouput : 50 20


//Test case 2 :
// Input : 10 20
// Ouput : 20 10 


//Test case 3 :
// Input : 12 20
// Ouput : 20  12 

int main()
{
	int a, b;
	cout << "P18:HOAN DOI HAI SO " << endl;
	cout << "Chu y :0 < a, b <= 10^9." << endl;
	while (1)
	{
		cout << "Nhap hai so nguyen duong a:";

		cin >> a;
		cout << "Nhap hai so nguyen duong b:";

		cin >> b;

		if (a < 0 || b < 0)
		{
			cout << "Ban nhap sai vui long nhap lai " << endl;
		}
		else
			break;
	}
	b = a + b;
	b = a - b;
	a = a - b;
	cout << "Hai so sau khi hoan doi la :";
	cout << "a :" << a << " " << "b :" << b << endl;


}
