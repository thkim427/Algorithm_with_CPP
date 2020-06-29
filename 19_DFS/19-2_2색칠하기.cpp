#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<vector<int>> v;
vector<int> check;
int n, m;

void DFS(int now, int clr) {
	check[now] = clr;

	for (int i = 0; i < v[now].size(); i++) {
		int next = v[now][i];
		int nclr;
		if (clr == 1) nclr = 2;
		else nclr = 1;
		if (!check[next]) {
			DFS(next, nclr);
		}
	}
}

int main()
{
	cin >> n >> m;
	v.resize(n);
	check.resize(n);

	while (m--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	DFS(0, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (check[i] == check[v[i][j]]) {
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}