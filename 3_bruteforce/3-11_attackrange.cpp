#include <iostream>
using namespace std;
int main()
{
	int a[100][100] = {};
	int n, y, x, r, t;
	cin >> n >> y >> x >> r;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			t = abs(i - y) + abs(j - x);
			if (t <= r) a[i][j] = t;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == y && j == x) {
				cout << 'x' << " ";
			}
			else cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
