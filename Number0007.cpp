

#include <iostream>
using namespace std;

string max(string a, string b) {
	int i = 0;
	if (a.length() > b.length()) return a;
	if (a.length() < b.length()) return b;

	while (true) {
		if (a[i] > b[i]) {
			return a;
			return 0;
		}

		if (a[i] < b[i]) {
			return b;
			return 0;
		}
		i++;
	}
	return a;

}

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	cout << max(a, max(b, c));
	return 0;
}
