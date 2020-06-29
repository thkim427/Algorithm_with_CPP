#include <iostream>
using namespace std;

char a[100];
int n, m;
int cnt = 0;

void tobin(int x) {
	if (x >= n && cnt == m) {
		cout << a << '\n';
		return;
	}
	else if (x < n) {
		if (cnt < m) {
			a[x] = '1';
			cnt += 1;
			tobin(x + 1);
			cnt -= 1;
		}
		a[x] = '0';
		tobin(x + 1);
	}
}

int main()
{
	cin >> n >> m;
	a[n] = '\0';
	tobin(0);
}
