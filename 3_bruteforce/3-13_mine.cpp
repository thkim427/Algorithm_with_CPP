#include <iostream>
using namespace std;
int main()
{
	int a[101][101] = {};
	int n, m;
	int y, x;
	int ans = 0;
	cin >> n >> m;
	cin >> y >> x;
	y--;
	x--;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	if (a[y][x] == 1) {
		cout << "game over";
	}
	else {
		if (y - 1 >= 0) {
			ans += a[y - 1][x];
			if (x - 1 >= 0) {
				ans += a[y - 1][x - 1];
			}
			if (x + 1 < m) {
				ans += a[y - 1][x + 1];
			}
		}
		if (y + 1 < n) {
			ans += a[y + 1][x];
			if (x - 1 >= 0) {
				ans += a[y + 1][x - 1];
			}
			if (x + 1 < m) {
				ans += a[y + 1][x + 1];
			}
		}
		if (x - 1 >= 0) {
			ans += a[y][x - 1];
		}
		if (x + 1 < m) {
			ans += a[y][x + 1];
		}
		cout << ans;
	}
}
