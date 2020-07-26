
#include <iostream>
using namespace std;
int main() {
    char ch;
    int x;
    cin >> ch >> x;
    if ((ch == 'A' || ch == 'C' || ch == 'E' || ch == 'G') && (x % 2 == 1)) { cout << "BLACK"; }
    else if ((ch == 'B' || ch == 'D' || ch == 'F' || ch == 'H') && (x % 2 == 0)) { cout << "BLACK"; }
    else { cout << "WHITE"; }
}
