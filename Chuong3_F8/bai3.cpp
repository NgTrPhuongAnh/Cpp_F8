#include <iostream>
using namespace std;

//  Vi?t chuong tr�nh nh?p nhi?t d? F t? b�n ph�m r?i t�nh v� hi?n th? nhi?t d? d� ? d? C

int main() {
	int F;
	cout << "F = ";
	cin >> F;
	
	float C = 1.0 * (F - 32) / 1.8;
	cout << "C = " << C;

	return 0; 
} 
