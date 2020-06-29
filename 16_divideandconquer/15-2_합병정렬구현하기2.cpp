#include <vector>
#include <iostream>
using namespace std;

vector<int> v;

void conquer(int s, int e, int m) {
	int mid = m;
	int k = s;
	vector<int> merge = v;
	while (s <= mid && m + 1 <= e) {
		if (v[s] < v[m + 1]) merge[k++] = v[s++];
		else merge[k++] = v[m++ + 1];
	}
	while (s <= mid) merge[k++] = v[s++];
	while (m + 1 <= e) merge[k++] = v[m++ + 1];
	v = merge;
}

void divide(int s, int e) {
	if (s >= e) return;
	int m = (s + e) / 2;
	divide(s, m);
	divide(m + 1, e);
	conquer(s, e, m);
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