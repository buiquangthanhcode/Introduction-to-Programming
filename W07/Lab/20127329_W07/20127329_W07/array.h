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

void P05_Sort_Even_Acsending(int a[], int n);
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
void P06_Check_Order_Array(int a[], int n, bool& flag_In, bool& flag_De, bool& flag_Equal);
// Bui Quang Thanh
//20127329
//TEST CASE 
//Test case 1:
//Input: n=5 | 1 2 3 4 5  
//Output: Mang Tang 


//Test case 2:
//Input: n=5 | 5 4 3 2 3 
//Output: Mang Khong Tang Khong Giam 


//Test case 3:
//Input: n=5 |  5 4 3 2 1 
//Output: Mang Giam 
int P09_Count_Number_Difference(int a[], int n);
// Bui Quang Thanh
//20127329
//TEST CASE 
//Test case 1:
//Input: n=5 | 1 2 3 4 5  
//Output: 5


//Test case 2:
//Input: n=6 | 1 2 1 1 1 1 
//Output: 2


//Test case 3:
//Input: n=3 |   1 1 1 
//Output: 1  
int P12_Find_Max_Second(int a[], int n);
// Bui Quang Thanh
//20127329
//TEST CASE 
//Test case 1:
//Input: n=5 | 1 2 3 4 2 
//Output: 3


//Test case 2:
//Input: n=2 | 1 2 
//Output: 1 


//Test case 3:
//Input: n=5  | -1 -2 -3 -4 -5 
//Output: -2
void P15_Reverse_Array(int a[], int n);
// Bui Quang Thanh
//20127329
//TEST CASE 
//Test case 1:
//Input: n=5 | 1 2 3 4 5
//Output: 5 4 3 2 1


//Test case 2:
//Input: n=5 | 0 5  1 2 4
//Output:  4 2 1 5 0 


//Test case 3:
//Input: n=6  | 1 1 1 1 1 2
//Output: 2 1 1 1 1 1 
void P25_Merge_2_Array_No_Decsending(int a[], int b[], int c[], int sizeA, int sizeB, int& sizeC);
// Bui Quang Thanh
//20127329
//TEST CASE 
//Test case 1:
//Input: sizeA=5 | 1 2 3 4 5
//Input: sizeB=3 | 2 3 4 
//Output: 1 2 2 3 3 4 4 5


//Test case 2:
//Input: sizeA=1 | 2		
//Input: sizeB=3 | -1 5 6
//Output: -1 2 5 6


//Test case 3:
//Input: sizeA=4 | 1 2 3 4 		
//Input: sizeB=5 | 6 7 8 9 10 
//Output: 1 2 3 4 6 7 8 9 10
void P26_Two_Item_Contain_2_Array(int a[], int b[], int c[], int sizeA, int sizeB, int& sizeC);
// Bui Quang Thanh
//20127329
//TEST CASE 
//Test case 1:
//Input: sizeA=5 | 1 2 3 4 5
//Input: sizeB=3 | 1 2 3 4 5
//Output: 1 2 3 4 5 


//Test case 2:
//Input: sizeA=5 | 1 2 3 4 5
//Input: sizeB=5 | 1 1 1 1 1 
//Output: 1


//Test case 3:
//Input: sizeA=5 | 1 2 3 4 	5	
//Input: sizeB=5 | 6 7 8 9 10 
//Output: Khong Co Gia Tri


bool isPrime(int n);
void removeNumber(int numbers[], int idx, int& size);
void removeDuplicate(int numbers[], int& size);
void swap(int& a, int& b);
int Min(int a, int b);
int Max(int a, int b);
void Acsending(int a[], int n);
void Descending(int a[], int n);
void output(int a[], int n);