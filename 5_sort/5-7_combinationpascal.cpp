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
	cout << ans;
}
