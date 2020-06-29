#include <iostream>
using namespace std;
int main()
{
	int now = 0;
	int u, d, l, r;
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			now = a[i][j];
			if (i + 1 < 5) {
				d = a[i + 1][j];
			}
			else d = 10;
			if (i - 1 >= 0) {
				u = a[i - 1][j];
			}
			else u = 10;
			if (j + 1 < 5) {
				r = a[i][j + 1];
			}
			else r = 10;
			if (j - 1 >= 0) {
				l = a[i][j - 1];
			}
			else l = 10;
			if (now < u&&now < d&&now < r&&now < l) {
				cout << "*" << " ";
			}
			else cout << now << " ";
		}
		cout << "\n";
	}
}
