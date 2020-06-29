#include <iostream>
using namespace std;
int main()
{
	int a[10][10] = {};
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			if (i != j) {
				if (a[i][j] == 0) {
					a[i][j] = 1;
				}
				else a[i][j] = 0;
				if (a[j][i] == 0) {
					a[j][i] = 1;
				}
				else a[j][i] = 0;
			}
		}
		if (a[i][i] == 0) {
			a[i][i] = 1;
		}
		else a[i][i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
