#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;

bool check(int x) {
	if (n == x) {
		char a[100000] = { false };
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int now = v[i];
			if (a[now] == false) {
				a[now] = true;
				cnt++;
			}
			else break;
			if (cnt == x) return true;
		}
	}
	else {
		for (int i = 0; i < n - x; i++) {
			int cnt = 0;
			char a[100000] = { false };
			for (int j = i; j < i + x; j++) {
				int now = v[j];
				if (a[now] == false) {
					a[now] = true;
					cnt++;
				}
				else break;
				if (cnt == x) return true;
			}
		}
	}
	return false;
}


int main()
{
	int s = 1;
	cin >> n;
	v.resize(n);
	int e = n;
	int mid, ans;

	for (int i = 0; i < n; i++)	cin >> v[i];

	while (1) {
		mid = (s + e) / 2;
		if (check(mid) == true) {
			if (check(mid + 1) == false) {
				ans = mid;
				break;
			}
			s = mid + 1;
		}
		else e = mid - 1;
	}
	cout << ans;
}