#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<vector<int>> v;
vector<bool> check;
int n, m;

void DFS(int now) {
	check[now] = true;
	cout << now << " ";

	for (int i = 0; i < v[now].size(); i++) {
		int next = v[now][i];
		if (!check[next]) {
			DFS(next);
		}
	}
}

void BFS() {
	queue<int> q;
}

int main()
{
	cin >> n >> m;
	int m1 = m;
	v.resize(n);
	check.resize(n);

	while (m1--) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	DFS(0);
}