#include <iostream>
using namespace std;

//Nh?p vào 1 ch? cái vi?t thu?ng b?t kì. Hãy in ra màn hình ch? cái dó du?i d?ng vi?t hoa.

int main() {
    char a;
    
    cout << "Chu cai viet thuong:  ";
	cin >> a; 
	
	cout << "Chu cai viet hoa: " << (char) (a - 32);
    return 0;
}
