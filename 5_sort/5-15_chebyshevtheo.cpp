#include <iostream>
#define n 2*123456
using namespace std;
int a[n] = {};
int main()
{
	int t;
	int cnt = 0;
	for (int i = 2; i < n; i++) {
		a[i] = i;
	}
	for (int i = 2; i < n; i++) {
		if (a[i] != 0) {
			for (int j = i + i; j < n; j += i) {
				a[j] = 0;
			}
		}
	}
	do {
		cin >> t;
		for (int i = t+1; i <= 2 * t; i++) {
			if (a[i] != 0) cnt++;
		}
		cout << cnt << "\n";
		cnt = 0;
	} while (t);

}
