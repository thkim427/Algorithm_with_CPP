#include <iostream>
using namespace std;
int main()
{
	int a, b, r;
	int na, nb;
	cin >> a >> b;
	na = a;
	nb = b;
	r = a % b;

	while (na % nb) {
		r = na % nb;
		na = nb;
		nb = r;
	}
	cout << a * b / r;
}

