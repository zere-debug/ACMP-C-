
#include <iostream>
using namespace std;

int main() {
	string ch;
	int a, b;
	cin >> a >> b;
	cin >> ch;

    if (ch == "freeze") {
        if (a < b) { cout << a; }
        else cout << b;
    }
    if (ch == "heat") {
        if (a > b) { cout << a; }
        else cout << b;
    }
    if (ch == "fan") { cout << a; }
    if (ch == "auto") { cout << b; }
}
