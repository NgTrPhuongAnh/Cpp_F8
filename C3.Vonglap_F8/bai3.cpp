#include <iostream>
using namespace std;

// Nh?p 1 s? nguyên dýõng n. In ra màn h?nh giai th?a n!.

int main() {
	int n;
	cout << "n = ";
	cin >> n; 
	
	unsigned long long S = 1;
	for (int i = 1; i <= n; i++) {
		S *= i; 
	} 
	cout << "n! = " << S; 
	return 0; 
} 
