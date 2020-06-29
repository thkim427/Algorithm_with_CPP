#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

bool bs(int s, int e, int t) {
	if (s > e) return false;
	int mid = (s + e) / 2;
	if (v[mid] > t) return bs(s, mid - 1, t);
	else if (v[mid] < t) return bs(mid + 1, e, t);
	else return true;
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

	while (m--) {
		int t;
		cin >> t;
		bool ans = bs(0, n - 1, t);
		if (ans) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
}
