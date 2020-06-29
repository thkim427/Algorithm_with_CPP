#include <iostream>
using namespace std;
int main()
{
	int n = 5;
	int a, sum = 0;
	while (n--) {
		cin >> a;
		a = a * a;
		sum += a;
	}
	cout << sum % 10;
}

