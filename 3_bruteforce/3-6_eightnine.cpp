#include <iostream>
using namespace std;
int main()
{
	int a[101][101] = {};
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
