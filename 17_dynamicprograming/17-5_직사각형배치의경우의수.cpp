#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	v.resize(n);

	switch (n)
	{
	case 1:
		cout << 1;
		return 0;
	case 2:
		cout << 2;
		return 0;
	default:
		v[0] = 1;
		v[1] = 2;
		for (int i = 2; i < n; i++) {
			v[i] = (v[i - 1] % 1000007) + (v[i - 2] % 1000007);
		}
		cout << v[n - 1] % 1000007;
		return 0;
	}
}
