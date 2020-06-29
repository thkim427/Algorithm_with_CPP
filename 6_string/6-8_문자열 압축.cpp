#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	string a;
	int n;
	int j = 0;
	char prev;
	char now;
	int cnt = 0;
	cin >> a;
	n = a.length();
	prev = a[0];
	char b[1000];

	for (int i = 0; i < n; i++) {
		now = a[i];
		if (now == prev) {
			cnt++;
		}
		else {
			if (cnt == 1) {
				b[j] = prev;
				j++;
				prev = now;
				cnt = 1;
			}
			else {
				if (cnt <=9) {
					b[j] = '0' + cnt;
					b[j + 1] = prev;
					j += 2;
					prev = now;
					cnt = 1;
				}
				else if (cnt <= 99) {
					b[j] = '0' + cnt / 10;
					b[j + 1] = '0' + cnt % 10;
					b[j + 2] = prev;
					j += 3;
					prev = now;
					cnt = 1;
				}
				else if (cnt <= 999) {
					b[j] = '0' + cnt / 100;
					b[j + 1] = '0' + (cnt / 10) % 10;
					b[j + 2] = '0' + cnt % 10;
					b[j + 3] = prev;
					j += 3;
					prev = now;
					cnt = 1;
				}
			}
		}
		if (i == n - 1) {
			if (cnt == 1) {
				b[j] = prev;
				j++;
			}
			else if (cnt <= 9) {
				b[j] = '0' + cnt;
				b[j + 1] = prev;
				j += 2;
			}
			else if (cnt <= 99) {
				b[j] = '0' + cnt / 10;
				b[j + 1] = '0' + cnt % 10;
				b[j + 2] = prev;
				j += 3;
			}
			else if (cnt <= 999) {
				b[j] = '0' + cnt / 100;
				b[j + 1] = '0' + (cnt / 10) % 10;
				b[j + 2] = '0' + cnt % 10;
				b[j + 3] = prev;
				j += 3;
			}
		}
	}
	b[j] = '\0';
	cout << b;
}
