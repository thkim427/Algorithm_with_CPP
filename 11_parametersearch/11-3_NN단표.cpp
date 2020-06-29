#include <iostream>
using namespace std;

int n;

int cal(int x) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (x / i > n) sum += n;
		else sum += x / i;
	}
	return sum;
}

int main()
{
	int m;
	cin >> n >> m;
	int e = n * n;
	int s = 1;
	int mid;
	int ans;

	while (1) {
		mid = (s + e) / 2;
		if (cal(mid) > m) {
			if (cal(mid - 1) < m) {
				ans = mid;
				break;
			}
			e = mid - 1;
		}
		else if (cal(mid) < m) {
			if (cal(mid + 1) > m) {
				ans = mid + 1;
				break;
			}
			s = mid + 1;
		}
		else {
			ans = mid;
			break;
		}
	}
	cout << ans;
}