#include <iostream>
using namespace std;

//Nh?p v�o 2 s? nguy�n a v� b. H�y ho�n d?i gi� tr? c?a 2 s? d� v� in ra m�n h�nh.

int main() {
    int a, b;
    
    cout << "a = ";
	cin >> a; 
	
	cout << "b = ";
	cin >> b;
	
	int c = a;
	a = b;
	b = c;
	
	cout << "Gia tri cua a la " << a << endl;
	cout << "Gia tri cua b la " << b;
    return 0;
}
