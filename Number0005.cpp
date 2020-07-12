
#include <iostream>
using namespace std;

int main() {

	int t = 0, f = 0, n;

	cin >> n;

	int* a = new int[n];

	for (int i = 0; i < n; i++) {

		cin >> a[i];

	}

	for (int i = 0; i < n; i++) {

		if (a[i] % 2 != 0) { cout << a[i] << " "; t++; }

	}

	cout << endl;

	for (int i = 0; i < n; i++) {

		if (a[i] % 2 == 0) { cout << a[i] << " "; f++; }

	}

	cout << endl;

	if (t > f) { cout << "NO"; }

	if (f > t || t == f) { cout << "YES"; }

}
