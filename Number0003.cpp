#include <iostream>
using namespace std;
int main()
{
	int x, x1;
	cin >> x;
	x1 = x / 10;

	if (x < 10) { cout << x * x; }

	if (x >= 10)
	{
		cout << x1 * (x1 + 1) << "25";
	}
}
