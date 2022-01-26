#pragma once
#include<iostream>
#include<iomanip>
using namespace std;
void input(const char s[], int& n);
void inputArray(int a[], int n);
void Find_Max_Min(int a[], int n, int&Max, int&Min);

void P01_Find_Number_Max_Min(int a[], int n, int& countMax, int& countMin);
// Bui Quang Thanh
//20127329

//TEST CASE 
//Test case 1:
//Input: n=10 | 1 2 3 4 5 6 7 7 7 7 
//Output: 
//Ket qua So luong so chan lon nhat :1
//Ket qua So luong so le be nhat : 1

//Test case 2:
//Input: n=5 | 1 1 2 3 2 
//Output:
//Ket qua So luong so chan lon nhat :2
//Ket qua So luong so le be nhat : 2

//Test case 3:
//Input: n=6 | 1 2  4 4 4 4
//Output: 
//Ket qua So luong so lon nhat : 4
//Ket qua So luong so be nhat : 1

//------------------------------------------------
double  P02_Tim_Trung_Binh_Cong_So_Chan(int a[], int n);
// Bui Quang Thanh
//20127329

//TEST CASE 
//Test case 1:
//Input: n=5 | 1 2 3 4 5  
//Output: 3.00


//Test case 2:
//Input: n=5 | 1 1 1 1 1 
//Output: 0.00


//Test case 3:
//Input: n=6 | 1 2  4 4 4 4	
//Output: 3.60


void P04_Find_Prime_Number(int a[], int n, bool& flag);
// Bui Quang Thanh
//20127329

//TEST CASE 
//Test case 1:
//Input: n=5 | 1 2 3 4 5  
//Output:  2 3 5


//Test case 2:
//Input: n=5 | 1 1 1 1 1 
//Output: Cac so nguyen to trong mang la :Khong co so nguyen to


//Test case 3:
//Input: n=6 | 1 2 4 4 4 4	
//Output: 2 
bool isPrime(int n);
