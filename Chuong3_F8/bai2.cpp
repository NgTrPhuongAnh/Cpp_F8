#include <iostream>
using namespace std;

//  Vi?t chuong tr�nh nh?p v�o s? nguy�n duong n (n <= 100). T�nh v� hi?n th? t?ng c�c s? t? nhi�n l? t? 1 d?n n.

int main() {
	int n, res;
	cout << "n = ";
	cin >> n;
	
	for (int i = 0; i <= n; i++) {
		if (i % 2 != 0) {
			res += i;
		}
	}
	cout << "Ket qua la " << res;

	return 0; 
} 
