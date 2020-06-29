#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int n, m, k;
vector<vector<int>> v;
vector<vector<int>> reversev;
vector<vector<int>> c;
vector<vector<int>> reversec;

int dijkstra1(int s) {
	vector<bool> visited(n);
	vector<int> t(n, 2100000000);
	t[s] = 0;
	for (int i = 0; i < n; i++) {
		int mincost = 2100000000;
		int minidx;
		for (int j = 0; j < n; j++) {
			if (t[j] < mincost && !visited[j]) {
				minidx = j;
				mincost = t[j];
			}
		}
		visited[minidx] = true;
		for (int j = 0; j < reversev[minidx].size(); j++) {
			int next = reversev[minidx][j];
			t[next] = min(t[next], t[minidx] + reversec[minidx][j]);
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += t[i];
	}
	return sum;
}

int dijkstra2(int s) {
	vector<bool> visited(n);
	vector<int> t(n, 2100000000);
	t[s] = 0;
	for (int i = 0; i < n; i++) {
		int mincost = 2100000000;
		int minidx;
		for (int j = 0; j < n; j++) {
			if (t[j] < mincost && !visited[j]) {
				minidx = j;
				mincost = t[j];
			}
		}
		visited[minidx] = true;
		for (int j = 0; j < v[minidx].size(); j++) {
			int next = v[minidx][j];
			t[next] = min(t[next], t[minidx] + c[minidx][j]);
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += t[i];
	}
	return sum;
}

int main()
{
	int ans = 0;
	cin >> n >> m >> k;
	k--;
	v.resize(n);
	c.resize(n);
	reversec.resize(n);
	reversev.resize(n);
	while (m--) {
		int a, b, C;
		cin >> a >> b >> C;
		a--;
		b--;
		v[a].push_back(b);
		reversev[b].push_back(a);
		c[a].push_back(C);
		reversec[b].push_back(C);
	}
	ans += dijkstra1(k);
	ans += dijkstra2(k);
	cout << ans;
}