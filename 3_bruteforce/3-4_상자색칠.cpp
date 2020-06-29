#include <iostream>
using namespace std;
int main()
{
	int cl[1001] = {};
	int n;
	int clnum;
	int clcnt = 0;
	cin >> n;
	while (n--) {
		cin >> clnum;
		if (cl[clnum] <= 1) {
			clcnt += 1;
			cl[clnum] += 1;
		}
		else cl[clnum] += 1;
	}
	if (clcnt >= 6) {
		cout << "YES";
	}
	else cout << "NO";
}
