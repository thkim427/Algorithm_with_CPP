#include <iostream>
using namespace std;
int main()
{
	int n = 25;
	int m = 0;
	int now;
	int sum = 0;
	int score = 0;
	int a[5][5] = {};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}

	while (n--) {
		m++;
		cin >> now;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (a[i][j] == now) {
					a[i][j] = 0;

					for (int k = 0; k < 5; k++) {
						if (a[i][k] == 0) sum++;
					}
					if (sum == 5) score++;
					sum = 0;

					for (int k = 0; k < 5; k++) {
						if (a[k][j] == 0) sum++;
					}
					if (sum == 5) score++;
					sum = 0;

					if (i + j == 4) {
						for (int k = 0; k < 5; k++) {
							if (a[k][4 - k] == 0) sum++;
						}
					}
					if (sum == 5) score++;
					sum = 0;

					if (i == j) {
						for (int k = 0; k < 5; k++) {
							if (a[k][k] == 0) sum++;
						}
					}
					if (sum == 5) score++;
					sum = 0;
				}
			}
		}
		if (score >= 3) {
			cout << m;
			return 0;
		}
	}
}
