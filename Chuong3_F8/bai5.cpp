#include <iostream>
using namespace std;

// Vi?t chuong tr�nh nh?p v�o m?t s? nguy�n duong n t? b�n ph�m. T�nh t?ng c�c ch? s? t?o n�n s? d�.

int main() {
    int n, S;
    cout << "n =  ";
    cin >> n;

    while (n > 0) {
    	S += n % 10;
    	n /= 10;
	}
	cout << "Ket qua la " << S;
    return 0;
}

