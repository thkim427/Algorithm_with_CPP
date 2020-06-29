#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<vector<int>> v;
vector<vector<int>> rv;
vector<int> t;
vector<int> r;
vector<bool> visited;
vector<bool> visited2;

void DFSR(int x) {
	visited2[x] = true;
	for (int i = 0; i < rv[x].size(); i++) {
		int next = rv[x][i];
		if (!visited2[next]) DFSR(next);
	}
	r.push_back(x);
}

void DFS(int x) {
	visited2[x] = true;
	for (int i = 0; i < v[x].size(); i++) {
		int next = v[x][i];
		if (!visited2[next]) DFS(next);
	}
}

void time(int x) {
	visited[x] = true;
	for (int i = 0; i < v[x].size(); i++) {
		int next = v[x][i];
		if (!visited[next]) {
			time(next);
		}
	}
	t.push_back(x);
}

int main()
{
	int ans = 0;
	cin >> n >> m;
	v.resize(n);
	rv.resize(n);
	while (m--) {
		int a, b;
		cin >> a >> b;
		v[a-1].push_back(b-1);
		rv[b-1].push_back(a-1);
	}
	visited.resize(n);
	for (int i = 0; i < n; i++) if (t.size() != n&&!visited[i]) time(i);
	visited.clear();
	visited.resize(n);

	for (int i = 0; i < n; i++) {
		int now = t[i];
		if (!visited[now]) {
			visited2.clear();
			visited2.resize(n);
			DFS(now);
			for (int j = 0; j < n; j++) visited2[j] = !visited2[j];
			DFSR(now);
			for (int j = 0; j < r.size(); j++) visited[r[j]] = true;
			r.clear();
			ans++;
		}
	}
	cout << ans;
}