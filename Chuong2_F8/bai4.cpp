#include <iostream>
#include <math.h>
using namespace std;

// Nhap v�o 2 so nguy�n duong a v� b (a v� b kh�ng tr�ng gi� tri). H�y in ra m�n h�nh so nho hon (kh�ng d�ng cau tr�c if else hoac to�n tu 3 ng�i).

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
