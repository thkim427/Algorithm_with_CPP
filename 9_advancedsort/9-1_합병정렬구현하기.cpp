#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void merge(int s, int e) {
	vector<int> t;

	int mid = (s + e) / 2;
	int l = s;
	int r = mid + 1;

	while (l <= mid && r <= e) {
		if (v[l] <= v[r]) {
			t.push_back(v[l++]);
		}
		else {
			t.push_back(v[r++]);
		}
	}

	if (l <= mid) {
		while (l <= mid) {
			t.push_back(v[l++]);
		}
	}
	else if (r <= e) {
		while (r <= e) {
			t.push_back(v[r++]);
		}
	}

	for (int i = 0; i < t.size(); i++) {
		v[s++] = t[i];
	}
}


void ms(int s, int e) {
	if (s < e) {
		int mid = (e + s) / 2;
		ms(s, mid);
		ms(mid + 1, e);
		merge(s, e);
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

	ms(0, v.size()-1);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}