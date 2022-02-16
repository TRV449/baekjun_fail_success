#include <iostream>

using namespace std;

int main() {
	int x, count = 1;
	cin >> x;
	if (x == 1) {
		count = 0;
		cout << count;
		exit(0);
	}
	for (;; count++) {
		if (x== 10) {
			x -= 1;
		}
		else {
			if (x % 3 == 0)
				x /= 3;

			else if (x % 3 != 0 && x % 2 == 0)
				x /= 2;

			else
				x -= 1;
		}
		if (x == 1) {
			break;
		}
	}
	cout << count;
}
