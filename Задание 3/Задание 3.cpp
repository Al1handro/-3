#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 8; i++) {
		int x, n;
		cin >> n; 
		if (n >= 10) {
			x = n % 9;
		}
		else {
			if (n > 4) {
				x = n;
			}
			else {
				x = n * 4;
			}
		}
		cout << x << endl;
		if ((x % 3 == 2) and (n != 2)) {
			if (n > 10) {
				x = x + 3;
			}
			else {
				x = x + 1;
			}
		}
		else {
			if (n <= 15) {
				x = 2 * x;
			}
			else{
				x = x - 1;
			}
		}
		cout << n << ' ' << x << endl;
	}
}
//Ответ ИДЛРСД