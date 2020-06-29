#include <iostream>
using namespace std;
int a[1000][1000];

int main()
{
	int n, m;
	int x, y;
	int sx = 0, sy = 0, ex, ey;
	int count = 1;
	cin >> x >> y >> n;
	ex = x - 1;
	ey = y - 1;
	m = n;
	
	while (m--) {
		for (int i = sy; i <= ey; i++) {
			if (!a[i][sx]) {
				a[i][sx] = count;
				count++;
			}
			if (a[i][sx] == n) {
				cout << sx + 1 << " " << i + 1;
			}
		}
		sx += 1;
		for (int i = sx; i <= ex; i++) {
			if (!a[ey][i]) {
				a[ey][i] = count;
				count++;
			}
			if (a[ey][i] == n) {
				cout << i + 1 << " " << ey + 1;
			}
		}
		ey -= 1;
		for (int i = ey; i >= sy; i--) {
			if (!a[i][ex]) {
				a[i][ex] = count;
				count++;
			}
			if (a[i][ex] == n) {
				cout << ex + 1 << " " << i + 1;
			}
		}
		ex -= 1;
		for (int i = ex; i >= sx; i--) {
			if (!a[sy][i]) {
				a[sy][i] = count;
				count++;
			}
			if (a[sy][i] == n) {
				cout << i + 1 << " " << sy + 1;
			}
		}
		sy += 1;
	}
}
