#include <iostream>
using namespace std;

// Nh?p 1 s? nguy�n d��ng n. In ra m�n h?nh gi� tr? c?a S = 1^2 + 2^2 + 3^2 + ... + n^2.

int main() {
	int n;
	cout << "n = "; 
	cin >> n; 
	
	int S = 0;
	for (int i = 1; i <= n; i++) {
		S += i * i; 
	} 
	cout << "S = " << S; 
	return 0; 
} 
