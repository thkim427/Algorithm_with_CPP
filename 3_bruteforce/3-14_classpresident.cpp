#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	int max = 0, midx = 0;
	int a[1000][5] = {};

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < 5; k++) {
				if (i != j) {
					if (a[i][k] == a[j][k]) {
						sum++;
						break;
					}
				}
			}
		}
		if (sum > max) {
			max = sum;
			midx = i;
		}
		sum = 0;
	}
	cout << midx + 1;
}

