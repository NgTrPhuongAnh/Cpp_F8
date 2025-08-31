#include <iostream>
using namespace std;

// Nh?p vào 1 s? nguyên dýõng n. In ra màn h?nh các s? chia h?t cho 5 t? 1 ð?n n.

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
