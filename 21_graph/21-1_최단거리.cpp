#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n, m, s, e;
	vector<vector<int>> v;
	vector<int> visited;
	int cnt = 0;
	cin >> n >> m;
	v.resize(n);
	visited.resize(n);
	while (m--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	cin >> s >> e;
	vector<int> t(n, 2100000000);
	t[s] = 0;
	for (int i = 0; i < n; i++) {
		int mincost = 2100000000;
		int minindex;
		
		for (int j = 0; j < n; j++) {
			if (t[j] < mincost && !visited[j]) {
				mincost = t[j];
				minindex = j;
			}
		}
		visited[minindex] = true;
		for (int j = 0; j < v[minindex].size(); j++) {
			int nextindex = v[minindex][j];
			t[nextindex] = min(t[nextindex], t[minindex] + 1);
		}
	}
	cout << t[e];
}
