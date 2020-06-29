#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < 5; i++) {
		cin >> m;
		if (n == m) {
			ans += 1;
		}
	}
	cout << ans;
}

