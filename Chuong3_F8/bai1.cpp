#include <iostream>
using namespace std;

// Vi?t chuong tr�nh gi?i phuong tr�nh b?c nh?t m?t ?n ax + b = 0, trong d� a v� b l� c�c h? s? nh?p t? b�n ph�m.

int main() {
	int a, b, res;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	if (a == 0 && b == 0) {
		cout << "Phuong trinh co vo so nghiem";
	} else if (a == 0 && b != 0) {
		cout << "Phuong trinh vo nghiem";
	} else {
		res = -b / a;
		cout << "Nghiem cua phuong trinh la " << res;
	}

	return 0; 
} 
