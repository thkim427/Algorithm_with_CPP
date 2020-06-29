#include <iostream>
using namespace std;
int a[1000000];
int b[1000000];
int main()
{
	int n, x, y, r;
	int step = 0;
	int next;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++) {
		b[i] = a[i + 1] - a[i];
	}

	r = b[0];
	for (int i = 1; i < n-1; i++) {
		x = r;
		y = b[i];
		r = x % y;
		while (x % y) {
			r = x % y;
			x = y;
			y = r;
		}
	}
	step = a[0];
	for (int i = 1; i < n; i++) {
		while (step < a[i]) {
			step += r;
			if (step != a[i]) {
				count++;
			}
		}
	}
	cout << count;
}

