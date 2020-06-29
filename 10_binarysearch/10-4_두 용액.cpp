#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int m = 1000000000;
int nm = 1000000000;
int idx;
int mint;

void bs(int s, int e, int t, int ti) {
	if (s > e) return;
	int mid = (s + e) / 2;
	if (v[mid] > t) {
		if (m > abs(v[mid] + t)) {
			m = abs(v[mid] + t);
			mint = ti;
			idx = mid;
		}
		bs(s, mid - 1, t, ti);
	}
	else if (v[mid] < t) {
		if (m > abs(v[mid] + t)) {
			m = abs(v[mid] + t);
			mint = ti;
			idx = mid;
		}
		bs(mid + 1, e, t, ti);
	}
	else {
		if (m > abs(v[mid] + t)) {
			m = abs(v[mid] + t);
			mint = ti;
			idx = mid;
		}
	}
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
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		int t;
		t = v[i];
		bs(0, n - 1, t, i);
	}

	cout << v[mint] << " " << v[idx];
}