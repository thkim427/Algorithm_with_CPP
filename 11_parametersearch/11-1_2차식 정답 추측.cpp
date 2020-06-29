#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long a;
	cin >> a;
	long long e = 1000000000;
	long long s = 1;
	long long mid;
	long long ans;

	while (1) {
		mid = (s + e) / 2;
		if (mid*mid + mid > a) {
			e = mid - 1;
		}
		else if (mid*mid + mid < a) {
			if (a < (mid + 1)*(mid + 1) + mid + 1) {
				ans = mid;
				break;
			}
			s = mid + 1;
		}
	}
	cout << ans;
}