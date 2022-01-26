#pragma once
#pragma once
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
// Ham input
void input(long& n);
void input_x(long& x);
void input_Double(double& x);
void input_Positive(int& choose);
void input_Day_Month_Year(int& day, int& month, int& year);

double P41_Tinh_Tong(long n);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input:1 
// Output:1.00
// Test case 2
// Input:2
// Output:0.50
// Test case 3
// Input:6
// Output:0.62

long P45_Tich_Cac_Chu_So(long x);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input:12344
// Output:96
// Test case 2
// Input:432
// Output:24
// Test case 3
// Input: 101
// Output:0
long P49_Chu_So_Dau_Tien(long x);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input:123
// Output:1
// Test case 2
// Input:632
// Output:6
// Test case 3
// Input: 97329
// Output:9

int P53_So_Luong_Chu_Cai_Lon_Nhat(long n);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input:1233223
// Output:3
// Test case 2
// Input::888888 
// Output:1
// Test case 3
// Input: 1234
// Output:1
bool P57_So_Doi_Xung(long x); 
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input:123
// Output: Khong phai so doi xung
// Test case 2
// Input:::123321 
// Output:La so doi xung
// Test case 3
// Input: 21
// Output:Khong phai so doi xung
long P61_Boi_Chung_Nho_Nhat(long x, long y);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input:100 200
// Output: 200
// Test case 2
// Input:::121 212 
// Output: 25652
// Test case 3
// Input:  2 3 
// Output: 6 
long P65_Tinh_Tong(long x, long n);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input:2 3 
// Output: -102
// Test case 2
// Input:::3 5 
// Output: -159432
// Test case 3
// Input:  1 4
// Output: 1
double P69_Tinh_Tong(long x, long n);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input: 1 2
// Output:  -0.54
// Test case 2
// Input:::2 3  
// Output:  0.42
// Test case 3
// Input:  2 2
// Output: 0.33
int P73_Tinh_Khoang_Cach_Giua_Hai_Ngay(int day, int month, int year, int cur_day, int cur_month, int cur_year);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input: 1 1 2020 | 28 1 2020
// Output:  27 
// Test case 2
// Input: 1 1 2020 | 1 1 2021  
// Output:  366
// Test case 3
// Input:  12 2 2002 | 23 11 2021
// Output: 7224
void P77_Tru_Di_N_Ngay(int &day, int& month, int& year, long n);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input: 1 1 2020 | 2
// Output:  30 12 2019
// Test case 2
// Input: 12 2 2020 | 23 
// Output:  20 1 2020
// Test case 3
// Input:  23 11 2020 | 100
// Output: 15 8 2020
int solveQuadratic(double a, double b, double c, double& x1, double& x2);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input:  1 2 3 
// Output: PHUONG TRINH VO NGHIEM
// Test case 2
// Input: 1 3 -4
// Output:  PHUONG TRINH CO 2 NGHIEM PHAN BIET  : x=-4|| x = 1
// Test case 3
// Input: 0 0 0
// Output: PHUONG TRINH VO SO NGHIEM
void tomorrow(int day1, int month1, int year1, int& day2, int& month2, int& year2);
// 20127329
// Bui Quang Thanh
// 20CLC08
// Test case 1
// Input: 1 1 2020 
// Output:  2 1 2020
// Test case 2
// Input: 29 2 2020 
// Output:  1 3 2020
// Test case 3
// Input:   31 12 2020
// Output:  1 1 2021

// các hàm bổ trợ 
long reverse(long x);
long LCM(long a, long b);
long GCD(long a, long b);
long long Pow(long x, long y);
int checkLeapYear(int nam);
long giaiThua(long n);
bool check_Day(int day, int month);
int PT_Bac_1(double a, double b, double& x);
int countNumber(long number);