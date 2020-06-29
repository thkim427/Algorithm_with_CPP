#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int sum = 0;
	queue<int> q;
	vector<int> v;
	int n, k;
	cin >> n >> k;
	q.push(k);
	v.resize(n + 1);
	for (int i = 0; i < v.size(); i++) v[i] = 0;
	while (!q.empty()) {
		int now = q.front();
		v[now] = 1;
		q.pop();
		if (now * 2 <= 10 && v[now * 2] == 0) q.push(now * 2);
		if (now / 3 >= 1 && v[now / 3] == 0) q.push(now / 3);
	}
	for (int i = 0; i < n; i++) {
		sum += v[i];
	}
	cout << n - sum;
}