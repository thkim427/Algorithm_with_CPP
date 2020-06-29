#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<long long> v;
	int n;
	cin >> n;
	v.resize(n + 1);

	if (n == 1) {
		cout << 1;
		return 0;
	}
	else if (n == 2) {
		cout << 2;
		return 0;
	}
	else {
		v[0] = 1;
		v[1] = 1;
		v[2] = 2;
		for (int i = 3; i <= n; i++) v[i] = (v[i - 1] + v[i - 2] + v[i - 3]) % 1000007;
	}
	cout << v[n];
}
