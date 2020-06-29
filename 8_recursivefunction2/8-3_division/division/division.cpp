#include <iostream>
using namespace std;

char a[100];
int n;
int cnt=0;

void division(int x,int j) {
	if (x == 0) {
		a[j] = '\0';
		cout << a << '\n';
		cnt++;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (x - i >= 0) {
				if (x - i != 0) {
					a[j] = i + '0';
					j++;
					a[j] = '+';
					division(x - i, j + 1);
					j--;
				}
				else {
					a[j] = i + '0';
					division(x - i, j + 1);
				}
			}
		}
	}
}

int main()
{
	cin >> n;
	division(n, 0);
	cout << cnt;
}
