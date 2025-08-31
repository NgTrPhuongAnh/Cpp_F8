#include <iostream>
using namespace std;

//  Vi?t chuong trình nh?p vào s? nguyên duong n (n <= 100). Tính và hi?n th? t?ng các s? t? nhiên l? t? 1 d?n n.

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
