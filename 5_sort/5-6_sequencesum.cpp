#include <iostream>
using namespace std;
int a[1000][1000];
int main()
{
	int n;
	int a0;
	int ans[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	a0 = (a[0][1] + a[0][2] - a[1][2]) / 2;
	for (int i = 1; i < n; i++) {
		ans[i] = a[0][i] - a0;
	}
	ans[0] = a0;
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
}