#include <iostream>
using namespace std;

// Vi?t chuong tr�nh nh?p v�o m?t s? n t? b�n ph�m. H�y ki?m tra xem n c� ph?i s? nguy�n t? hay kh�ng.

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

