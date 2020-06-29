#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int getsubmax(int s, int e) {
	if (s >= e) return v[s];

	int mid = (s + e) / 2;
	int left = getsubmax(s, mid);
	int right = getsubmax(mid + 1, e);

	int lsum = 0, lmax = -2147483648;
	for (int i = mid; i >= s; i--) {
		lsum = lsum + v[i];
		lmax = max(lmax, lsum);
	}

	int rsum = 0, rmax = -2147483648;
	for (int i = mid + 1; i <= e; i++) {
		rsum = rsum + v[i];
		rmax = max(rmax, rsum);
	}

	int mmax = lmax + rmax;

	return max({ left, mmax, right });
}

int main()
{
	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	cout << getsubmax(0, n - 1);
}
