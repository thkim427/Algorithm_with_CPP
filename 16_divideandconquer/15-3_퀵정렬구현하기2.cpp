#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

vector<int> v;

int conquer(int s, int e) {
	int p = s++;
	while (1) {
		while (v[s] <= v[p]) s++;
		while (v[e] > v[p]) e--;
		if (s > e) break;
		swap(v[s], v[e]);
	}
	swap(v[p], v[e]);
	return e;
}

void divide(int s, int e) {
	if (s >= e) return;
	int p = conquer(s, e);
	divide(s, p - 1);
	divide(p + 1, e);
}

int main()
{
	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	divide(0, n - 1);
	for (int x : v) cout << x << " ";
}
