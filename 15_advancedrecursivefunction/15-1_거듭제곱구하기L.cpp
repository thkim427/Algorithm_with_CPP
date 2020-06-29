#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<long long> v;
	long long n;
	long long m;
	cin >> n >> m;
	long long ans = n;

	if (n == 1) {
		cout << 1;
		return 0;
	}

	while (m != 1)
	if (m % 2 == 0) {
		m /= 2;
		ans = (ans * ans) % 10007;
	}
	else {
		m -= 1;
		v.push_back(ans);
	}
	for (int i = 0; i < v.size(); i++) ans = (ans * v[i]) % 10007;
	cout << ans % 10007;
}