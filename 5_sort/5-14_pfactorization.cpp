#include <iostream>
#define n 10000000
using namespace std;
int a[n] = {};
int main()
{
	int t;
	cin >> t;
	for (int i = 2; i <= t; i++) {
		a[i] = i;
	}
	for (int i = 2; i <= t; i++) {
		if (a[i] != 0) {
			for (int j = i + i; j <= t; j += i) {
				a[j] = 0;
			}
		}
	}

	while (t != 1) {
		for (int i = 2; i <= t; i++) {
			if (a[i] != 0) {
				if (t % a[i] == 0) {
					cout << a[i] << " ";
					t = t / a[i];
					break;
				}
			}
		}
	}
}
