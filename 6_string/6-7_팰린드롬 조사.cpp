#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int n;
	cin >> a;
	n = a.length();
	for (int i = 0; i < n; i++) {
		if (a[i] != a[n - 1 - i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
