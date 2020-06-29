#include <iostream>
using namespace std;

int main()
{
	int n;
	bool a[1001];
	int b[1001];
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i <= 1000; i++) {
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;

	for (int i = 2; i <= 1000; i++) {
		for (int j = 2; i*j <= 1000; j++) {
			a[j*i] = 0;
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (a[b[i]] == 1) {
			count++;
		}
	}
	cout << count;
}

