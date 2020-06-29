#include <iostream>
using namespace std;


void up(int i, int j, int a[][8]) {
	for (int dy = 1; dy <= 8; dy++) {
		if (i - dy >= 0) {
			if (a[i - dy][j] == 3) {
				break;
			}
			else if (a[i - dy][j] == 1) {
				cout << 1;
				exit(0);
			}
		}
	}
}


void down(int i, int j, int a[][8]) {
	for (int dy = 1; dy <= 8; dy++) {
		if (i + dy < 8) {
			if (a[i + dy][j] == 3) {
				break;
			}
			else if (a[i + dy][j] == 1) {
				cout << 1;
				exit(0);
			}
		}
	}
}


void left(int i, int j, int a[][8]) {
	for (int dx = 1; dx <= 8; dx++) {
		if (j - dx >= 0) {
			if (a[i][j - dx] == 3) {
				break;
			}
			else if (a[i][j - dx] == 1) {
				cout << 1;
				exit(0);
			}
		}
	}
}


void right(int i, int j, int a[][8]) {
	for (int dx = 1; dx <= 8; dx++) {
		if (i + dx < 8) {
			if (a[i][j + dx] == 3) {
				break;
			}
			else if (a[i][j + dx] == 1) {
				cout << 1;
				exit(0);
			}
		}
	}
}


int main()
{
	int a[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (a[i][j] == 2) {
				up(i, j, a);
				down(i, j, a);
				left(i, j, a);
				right(i, j, a);
			}
		}
	}
	cout << 0;
	exit(0);
}
