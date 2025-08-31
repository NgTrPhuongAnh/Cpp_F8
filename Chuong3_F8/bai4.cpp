#include <iostream>
using namespace std;

// Vi?t chuong trình nh?p vào m?t s? n t? bàn phím. Hãy ki?m tra xem n có ph?i s? nguyên t? hay không.

int main() {
    int n;
    cout << "n =  ";
    cin >> n;

    bool nguyenTo = true; 

    if (n < 2) {
        nguyenTo = false; 
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) { 
                nguyenTo = false;
                break;
            }
        }
    }

    if (nguyenTo)
        cout << n << " la so nguyen to." << endl;
    else
        cout << n << " khong phai so nguyen to." << endl;

    return 0;
}

