#include <iostream>
using namespace std;
int check(int r, int c, int a[][20]);
int main()
{
	int a[20][20] = {0};
	int c, r;
	int index = 0, score = 0;
	int maxscore = 0;
	cin >> c >> r;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
		}
	}

	for (int j = 0; j < c; j++) {
		for (int i = 0; i < r; i++) {
			if (a[i][j] == 1) {
				if (i <= 3)break;
				else {
					for (int k = 1; k <= 4; k++) {
						a[i - k][j] = 1;
					}
					score = check(r, c, a);
					for (int k = 1; k <= 4; k++) {
						a[i - k][j] = 0;
					}
					if (score > maxscore) {
						maxscore = score;
						index = j;
					}
					score = 0;
					break;
				}
			}
			if (i == r - 1) {
				for (int k = 0; k < 4; k++) {
					a[i - k][j] = 1;
				}
				score = check(r, c, a);
				for (int k = 0; k < 4; k++) {
					a[i - k][j] = 0;
				}
				if (score > maxscore) {
					maxscore = score;
					index = j + 1;
				}
				score = 0;
			}
		}
	}
	cout << index << '\n' << maxscore;
}

int check(int r, int c, int a[][20]) {
	int sum = 0;
	int score = 0;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (a[i][j] == 1)sum++;
		}
		if (sum == c)score++;
		sum = 0;
	}

	return score;
}