#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> v;
vector<int> check;
int n, m;

void DFS(int x) {
	check[x] = 1;
	for (int i = 0; i < v[x].size(); i++) {
		int next = v[x][i];
		if (!check[next]) {
			DFS(next);
		}
	}
}

int main()
{
	int sum = 0;
	cin >> n >> m;
	v.resize(n);
	check.resize(n);
	while (m--) {
		int a, b;
		cin >> a >> b;
		v[a - 1].push_back(b - 1);
		v[b - 1].push_back(a - 1);
	}
	DFS(0);
	for (int i = 0; i < n; i++) {
		sum += check[i];
	}
	cout << sum - 1;
}
