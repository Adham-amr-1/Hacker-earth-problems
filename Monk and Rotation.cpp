#include <iostream>
using namespace std;
int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
        cin >> n >> k;
		int* a = new int[n];
        int* r = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
        int last_index = (n - k % n) % n;

		for (int i = last_index ; i < n; i++) {
            r[i - last_index] = a[i];
		}
		for (int i = 0; i < last_index; i++) {
			r[n - last_index + i] = a[i];
		}
		for (int i = 0; i < n; i++) {
            cout << r[i];
            if (i != n - 1) {
                cout << " ";
            }
		}
		cout << endl;
	}
	return 0;
}
