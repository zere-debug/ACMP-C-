#include <iostream> 
using namespace std; 
int main() {
	long long n, s; 
	cin >> n;

	if (n > 0) {
		s = (1 + n) * n / 2;
	}

	if (n < 0) {
		s = (1 + n) * (2 - n) / 2;
	}

	if (n == 0) {
		s = 1;
	}

	cout << s;

	return 0;
}