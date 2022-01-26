#include<iostream>
using namespace std;
// Bui Quang Thành
// 20CLC08
// 20127329
// 
// Test Case 1 
//Input: 8 8 8 0
//Ouput: 8 0

// Test Case 2
//Input: -100 2 3 4 
//Ouput: 4 -100

// Test Case 3
//Input: 1 2 3 4 
//Ouput: 4 2

int find_Max(int a, int b)
{
	int max;
	a >= b ? max = a : max = b;
	return max;
}
int find_Min(int a, int b)
{
	int min;
	a <= b ? min = a : min = b;
	return min;
}
int main()
{
	int a, b, c, d;
	cout << "Enter a,b,c,d :";
	cin >> a >> b >> c >> d;
	int _max = find_Max(find_Max(a, b), find_Max(c, d));
	int _min = find_Min(find_Min(a, b), find_Min(c, d));
	cout << _max << " " << _min << endl;
	

	return 0; 
}