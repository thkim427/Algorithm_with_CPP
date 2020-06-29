#include <iostream>
using namespace std;
int main()
{
	int n;
	int a = 1, b = 1, next;
	int count = 2;
	cin >> n;

	if (n == 1 || n == 2) {
		cout << 1;
		return 0;
	}
	for (int i = 0; i < 45; i++) {
		next = a + b;
		a = b;
		b = next;
		count += 1;
		if (count == n) {
			cout << next;
			return 0;
		}
	}
}
