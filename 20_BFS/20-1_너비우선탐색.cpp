#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
	vector<int> ans;
	vector<bool> check;
	vector<vector<int>> v;
	queue<int> q;
	int n, m;
	cin >> n >> m;
	v.resize(n);
	check.resize(n);
	for (int i = 0; i < n; i++) v[i].resize(n);
	while (m--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	q.push(0);
	check[0] = true;
	ans.push_back(0);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < v[now].size(); i++) {
			int next = v[now][i];
			if (!check[next]) {
				q.push(next);
				check[next] = true;
				ans.push_back(next);
			}
		}
	}
	for (int i = 0; i < n; i++) cout << ans[i] << " ";
}
