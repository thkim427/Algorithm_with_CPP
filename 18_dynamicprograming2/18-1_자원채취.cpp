#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	vector<vector<int>> v;
	int n, m;
	cin >> n >> m;
	v.resize(n);
	for (int i = 0; i < n; i++) v[i].resize(m);
	for (int r = 0; r < n; r++)
		for (int c = 0; c < m; c++)
			cin >> v[r][c];
	vector<vector<int>> ans = v;
	for (int r = 1; r < n; r++) ans[r][0] = ans[r - 1][0] + v[r][0];
	for (int c = 1; c < m; c++) ans[0][c] = ans[0][c - 1] + v[0][c];
	for (int r = 1; r < n; r++)
		for (int c = 1; c < m; c++)
			ans[r][c] = max(ans[r - 1][c], ans[r][c - 1]) + v[r][c];
	cout << ans[n-1][m-1];
}
