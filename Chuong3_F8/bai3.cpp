#include <iostream>
using namespace std;

//  Vi?t chuong trình nh?p nhi?t d? F t? bàn phím r?i tính và hi?n th? nhi?t d? dó ? d? C

int main() {
	int F;
	cout << "F = ";
	cin >> F;
	
	float C = 1.0 * (F - 32) / 1.8;
	cout << "C = " << C;

	return 0; 
} 
