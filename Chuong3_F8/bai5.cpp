#include <iostream>
using namespace std;

// Vi?t chuong trình nh?p vào m?t s? nguyên duong n t? bàn phím. Tính t?ng các ch? s? t?o nên s? dó.

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

