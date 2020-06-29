#include <iostream>
using namespace std;
int main()
{
	int n, k;
	int m;
	long long ans = 1;
	cin >> n >> k;
	m = k;
	while (m--) {
		ans *= n;
		n--;
	}
	m = k;
	while (m--) {
		ans /= k;
		k--;
	}
	m = 0;
	while (1) {
		if (ans % 10 == 0) {
			m++;
			ans = ans / 10;
		}
		else {
			cout << m;
			return 0;
		}
	}
}
