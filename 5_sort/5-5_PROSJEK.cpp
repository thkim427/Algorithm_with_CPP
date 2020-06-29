#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int b[100];
	int n, sum = 0, m;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	m = n;
	while (m--) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				sum += a[j];
			}
			b[i] = sum / (i + 1);
			sum = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
}
