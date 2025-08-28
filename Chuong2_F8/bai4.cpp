#include <iostream>
#include <math.h>
using namespace std;

// Nhap vào 2 so nguyên duong a và b (a và b không trùng giá tri). Hãy in ra màn hình so nho hon (không dùng cau trúc if else hoac toán tu 3 ngôi).

int main() {
    int a, b;
    
    cout << "a = ";
	cin >> a; 
	
	cout << "b = ";
	cin >> b;
	
	int c = a + b;
	int d = abs(a - b);
	
	cout << "Gia tri nho hon la " << (c - d) / 2;
    return 0;
}
