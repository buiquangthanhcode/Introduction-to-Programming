#include<iostream>
#include<iomanip>
#include<math.h>
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
//Input:  0 1 7
//Ouput:  Phuong trinh co 1 nghiem : -7.00
int main()
{
    float a, b, c, denta;
    cout << " Nhap he so cua a  ,b , c " << endl;
    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0 && c == 0)
        {
            cout << "Phuong trinh co vo so nghiem " << endl;
        }
        else if (b == 0 && c != 0)
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
        else if (b != 0 && c == 0)
        {
            cout << "Phuong trinh co 1 nghiem bang 0 " << endl;
        }
        else if (b != 0 && c != 0)
        {
            float x = (-c) / b;
            cout << "Phuong trinh co 1 nghiem : " << fixed << setprecision(2) << x << endl;
        }
        else
        {
            cout << "Loi phep tinh " << endl;
        }
    }
    else {
        denta = (b * b) - (4 * a * c);
        if (denta > 0)
        {
            float x1 = (-b + sqrt(denta)) / (2 * a);
            float x2 = (-b - sqrt(denta)) / (2 * a);
            cout << "Phuong trinh co nghiem X1: " << fixed << setprecision(2) << x1 << " || X2: " << x2 << endl;

        }
        else if (denta == 0)
        {
            float x = -b / (2 * a);
            cout << "Phuong trinh co 1 nghiem duy nhat " << fixed << setprecision(2) << x << endl;

        }
        else if (denta < 0)
        {
            cout << "Phuong trinh vo nghiem" << endl;

        }
    }

    return 0;
}
