#include <iostream>
using namespace std;
int main() {
	int n, i, r = 1;
	cin >> n;
	for (i = n; i > 0; i--) {
		r *= i;
	}
	cout << r;
	return 0;
}
