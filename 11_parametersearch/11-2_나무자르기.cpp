#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int wood(int n) {
	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] - n > 0) {
			sum += v[i] - n;
		}
	}
	return sum;
}


int main()
{
	int n, m;
	cin >> n >> m;
	v.resize(n);

	int e = 2000000000;
	int s = 1;
	int mid;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	while (1) {
		mid = (s + e) / 2;
		if (wood(mid) < m) {
			if (wood(mid + 1) > m) {
				ans = mid;
				break;
			}
			e = mid - 1;
		}
		else if (wood(mid) > m) {
			s = mid + 1;
		}
		else {
			ans = mid;
			break;
		}
	}
	cout << ans;
	system("pause");
	return 0;
}
