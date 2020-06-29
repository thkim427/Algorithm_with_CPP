#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int idx;
	string min(100, 'z');
	string temp(min);
	string a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[j] < min) {
				min = a[j];
				idx = j;
			}
		}
		swap(a[i], a[idx]);
		min = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << '\n';
	}
}
