#include<iostream>
#include <iomanip>
using namespace std;
// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input: 1 2 5
//Ouput: Phuong trinh vo nghiem

// Test Case 2
//Input: 0 0 0
//Ouput: Phuong trinh vo so nghiem

// Test Case 3
//Input:   2 -8 6
//Ouput:  -1 1 -1.73 1.73
int PT_Bac_1(double a, double b, double& x)
{
	int nSolution;
	if (a != 0)
	{
		x = -b / a;
		nSolution = 1;
	}
	else
	{
		if (b == 0)
		{
			nSolution = -1;
		}
		else
		{
			nSolution = 0;
		}
	}
	return nSolution;
}
int PT_Bac_2(double a, double b, double c, double& x1, double& x2)
{
	int nSolution;
	x1 = x2 = 0;
	if (a == 0)
	{
		nSolution = PT_Bac_1(b, c, x1);
	}
	else
	{
		double Delta = (b * b) - (4 * a * c);
		if (Delta < 0)
		{
			nSolution = 0;
		}
		else if (Delta == 0)
		{
			x1 = x2 = (-b / (2 * a));
			nSolution = 1;
		}
		else
		{
			
			x1 = (-b - sqrt(Delta)) /( 2 * a);
			x2 = (-b + sqrt(Delta)) / (2 * a);
			nSolution = 2;

		}

	}
	return nSolution;
}
int PT_Bac_4(double a, double b, double c, double& x1, double& x2, double& x3, double& x4)
{
	int nSolution, nSol1, nSol2;
	double y1, y2;
	x1 = x2 = 0;
	x3 = x4 = 0;
	nSol1 = PT_Bac_2(a, b, c, y1, y2);
	if (nSol1 == 1)
	{
		nSolution = PT_Bac_2(1, 0, -y1, x1, x2);
	}
	else if (nSol1 == 2)
	{
		nSol2 = PT_Bac_2(1, 0, -y1, x1, x2);
		if (nSol2 == 1)
		{
			nSolution = 1+PT_Bac_2(1, 0, -y2, x2, x3);
		}
		else if (nSol2 == 2)
		{
			nSolution = 2 + PT_Bac_2(1, 0, -y2, x3, x4);
		}
		else if (nSol2 == 0 )
		{
			nSolution = PT_Bac_2(1, 0, -y2, x1, x2);
		}
	}
	else if (nSol1 == 0 || nSol1 == -1)
	{
		nSolution = nSol1;
	}
	return nSolution;
}
int main()
{
	double  a, b, c, x1, x2, x3, x4;
	cout << "Hay nhap a,b,c " << endl;
	cin >> a >> b >> c;
	if (PT_Bac_4(a, b, c, x1, x2, x3, x4) == -1)
	{
		cout << "Phuong trinh vo so nghiem " << endl;
	}
	else if (PT_Bac_4(a, b, c, x1, x2, x3, x4) == 0)
	{
		cout << "Phuong trinh vo nghiem " << endl;
	}
	else if (PT_Bac_4(a, b, c, x1, x2, x3, x4)==1)
	{
		cout << "Phuong trinh co 1 nghiem " << fixed << setprecision(2) << x1 << endl;
	}
	else if (PT_Bac_4(a, b, c, x1, x2, x3, x4) == 2)
	{
		cout << "Phuong trinh co 2 nghiem " << fixed << setprecision(2) << x1 << " " << x2 << endl;
	}
	else if (PT_Bac_4(a, b, c, x1, x2, x3, x4) == 3)
	{
		cout << "Phuong trinh co 3 nghiem " << fixed << setprecision(2) << x1 << " " << x2 << " "<<x3 <<endl;
	}
	else if (PT_Bac_4(a, b, c, x1, x2, x3, x4) == 4)
	{
		cout << "Phuong trinh co 4 nghiem " << fixed << setprecision(2) << x1 << " " << x2 << " " << x3 <<" " << x4 << endl;
	}
	return 0; 
}