#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());

	cin >> m;
	while (m--) {
		int t;
		cin >> t;
		if (binary_search(v.begin(), v.end(), t)) {
			cout << 1 << "\n";
		}
		else cout << 0 << "\n";
	}
}