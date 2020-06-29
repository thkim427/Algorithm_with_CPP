#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int y, x;
	cin >> x >> y;
	int d = y - x;
	int s = sqrt(d);
	if (d == s * s) {
		cout << s * 2 - 1;
	}
	else if (d <= s * s + s) {
		cout << s * 2;
	}
	else if (d <= s * s + 2 * s) {
		cout << s * 2 + 1;
	}
}
