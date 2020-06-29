#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> v;

int makepivot(int s, int e) {
	int p = v[s];
	int l = s + 1;
	int r = e;

	do {
		while(v[l] < p && l < e) l++;
		while(v[r] > p && r >= s + 1) r--;
		if (l < r) {
			swap(v[l], v[r]);
		}
	} while (l < r);
	swap(v[s], v[r]);
	return r;
}


void qs(int s, int e) {
	if (s >= e) return;
	int p = makepivot(s, e);
	qs(s, p - 1);
	qs(p + 1, e);
}


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	qs(0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}