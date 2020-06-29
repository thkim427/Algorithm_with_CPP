#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int cnt = 0;

void bs(int s, int e, int t) {
	if (s > e) return;
	int mid = (s + e) / 2;
	if (v[mid] >= t) bs(s, mid - 1, t);
	if (v[mid] <= t) bs(mid + 1, e, t);
	if (v[mid] == t) cnt++;
}

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());

	while (m--) {
		int t;
		cin >> t;
		bs(0, n - 1, t);
		cout << cnt << "\n";
		cnt = 0;
	}
}