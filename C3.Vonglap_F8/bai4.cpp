#include <iostream>
using namespace std;

// Nh?p v�o 1 s? nguy�n d��ng n. In ra m�n h?nh c�c s? chia h?t cho 5 t? 1 �?n n.

int main() {
	int n;
	cout << "n = ";
	cin >> n; 
	
	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0) {
			cout << i << " "; 
		} 
	} 

	return 0; 
} 
