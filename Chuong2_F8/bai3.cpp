#include <iostream>
using namespace std;

//Nh?p vào 2 s? nguyên a và b. Hãy hoán d?i giá tr? c?a 2 s? dó và in ra màn hình.

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
