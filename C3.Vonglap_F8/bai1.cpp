#include <iostream>
using namespace std;

// Nh?p 1 s? nguyên dýõng n. In ra màn h?nh giá tr? c?a S = 1 + 2 + 3 + ... + n

int main() {
	int n;
	cout << "n = "; 
	cin >> n; 
	
	int S = 0;
	for (int i = 1; i <= n; i++) {
		S += i; 
	} 
	cout << "S = " << S; 
	return 0; 
} 
