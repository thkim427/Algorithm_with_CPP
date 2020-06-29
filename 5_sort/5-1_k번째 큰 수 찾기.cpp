#include <iostream>
#include <algorithm>
using namespace std;
int a[100000];
int main()
{
	int n, k;
	int max = 0, idx;
	 
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[j] > max) {
				max = a[j];
				idx = j;
			}
		}
		swap(a[i], a[idx]);
		if (i+1 == k) {
			cout << a[i];
			return 0;
		}
		max = 0;
	}
}
