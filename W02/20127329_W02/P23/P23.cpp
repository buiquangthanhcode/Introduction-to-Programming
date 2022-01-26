#include<iostream>
#include<iomanip>
using namespace std;
#define PI 3.14
//20127329
//Bùi Quang Thành
//20CLC08
//

//Test case 1 :
// Input : 1 2 
//Output: 12.99



//Test case 2 :
// Input :  1 5
// Ouput : 78.93



//Test case 3 :
// Input :  7 8 
// Ouput : 222.18
int main()
{
	cout << "0 < edge, radius <= 10^9." << endl;
	float r, e;

	while (1)
	{
		cout << "Hay nhap canh tam giac deu va ban kinh " << endl;
		cin >> e >> r;
		if (e < 0 || r < 0)
		{
			cout << "Hay nhap lai so lon hon 0" << endl;
		}
		else break;
	}

	float S_triangle = e * e * (sqrt(3) / 4);
	float S_Circle = PI * r * r;
	float Sct = (1 / 2) * (r * r) * (PI / 3);
	float S = (S_triangle + S_Circle) - (3 * Sct);
	cout << fixed << setprecision(2) << "Dien tich cua hinh la :" << S << endl;

	return 0;
}