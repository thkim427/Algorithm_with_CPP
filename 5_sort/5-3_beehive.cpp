#include <iostream>
using namespace std;
int main()
{
	int n;
	int step = 0;
	int ans = 0;

	cin >> n;
	for (int i = 0; i < 1000000000; i++) {
		n -= step;
		if (n <= 1) {
			cout << ans + 1;
			return 0;
		}
		step += 6;
		ans += 1;
	}
}
