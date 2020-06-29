#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> v;
vector<int> ans;
int n;
int k = 1;

void DFS(int r, int c) {
	v[r][c] = k;
	if (r - 1 >= 0) {
		if(v[r - 1][c] == 1) DFS(r - 1, c);
	}
	if (r + 1 < n) {
		if(v[r + 1][c] == 1) DFS(r + 1, c);
	}
	if (c - 1 >= 0) {
		if(v[r][c - 1] == 1) DFS(r, c - 1);
	}
	if (c + 1 < n) {
		if(v[r][c + 1]) DFS(r, c + 1);
	}
}

int main()
{
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) v[i].resize(n);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < n; j++) {
			v[i][j] = stoi(s.substr(j, 1));
		}
	}

	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			if (v[r][c] == 1) {
				k++;
				DFS(r, c);
			}
		}
	}
	ans.resize(k - 1);
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
		if (v[i][j] == 0) continue;
		ans[v[i][j] - 2]++;
	}
	sort(ans.begin(),ans.end());
	if (k == 1) {
		cout << 0;
		return 0;
	}
	cout << k - 1 << "\n";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}
}