#include <iostream>
using namespace std;

//Nh?p v�o 1 ch? c�i vi?t thu?ng b?t k�. H�y in ra m�n h�nh ch? c�i d� du?i d?ng vi?t hoa.

int main() {
    char a;
    
    cout << "Chu cai viet thuong:  ";
	cin >> a; 
	
	cout << "Chu cai viet hoa: " << (char) (a - 32);
    return 0;
}
