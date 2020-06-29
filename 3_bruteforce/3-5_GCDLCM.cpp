#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, r;
	int na, nb;
	cin >> a >> b;

	if (a == b) {
		cout << a << "\n" << a;
		return 0;
	}

	na = a;
	nb = b;
	r = a % b;

	if (r == 0) {
		cout << min(a, b) << "\n" << max(a, b);
		return 0;
	}

	while (na % nb) {
		r = na % nb;
		na = nb;
		nb = r;
	}
	cout << r << "\n" << a * b / r;
}

