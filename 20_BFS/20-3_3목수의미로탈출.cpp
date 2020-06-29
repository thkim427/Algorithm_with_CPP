#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
	vector<int> ans;
	vector<vector<int>> check;
	vector<vector<int>> v;
	queue<vector<int>> q;

	int n, m;
	int k = 0;
	cin >> n >> m;
	v.resize(n);
	check.resize(n);

	for (int i = 0; i < n; i++) {
		v[i].resize(m);
		check[i].resize(m);
	}
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> v[i][j];

	vector<int> t;
	t.push_back(n - 1);
	t.push_back(0);
	t.push_back(k);
	t.push_back(1);
	q.push(t);

	while (!q.empty()) {
		auto now = q.front();
		int nowr = now[0];
		int nowc = now[1];
		int nowcnt = now[2];
		int nowwep = now[3];

		if (nowr == 0 && nowc == m - 1) {
			cout << nowcnt;
			return 0;
		}
		if (nowc + 1 < m) {
			if (nowwep == 1) {
				if (v[nowr][nowc + 1] == 0) {
					if (check[nowr][nowc + 1] <= 1) {
						check[nowr][nowc + 1] = 2;
						vector<int> next;
						next.push_back(nowr);
						next.push_back(nowc + 1);
						next.push_back(nowcnt + 1);
						next.push_back(nowwep);
						q.push(next);
					}
				}
				else if (v[nowr][nowc + 1] == 1) {
					vector<int> next;
					next.push_back(nowr);
					next.push_back(nowc + 1);
					next.push_back(nowcnt + 1);
					next.push_back(0);
					q.push(next);
				}
			}
			else {
				if (v[nowr][nowc + 1] == 0) {
					if (check[nowr][nowc + 1] == 0) {
						check[nowr][nowc + 1] = 1;
						vector<int> next;
						next.push_back(nowr);
						next.push_back(nowc + 1);
						next.push_back(nowcnt + 1);
						next.push_back(0);
						q.push(next);
					}
				}
			}
		}
		if (nowc - 1 >= 0) {
			if (nowwep == 1) {
				if (v[nowr][nowc - 1] == 0) {
					if (check[nowr][nowc - 1] <= 1) {
						check[nowr][nowc - 1] = 2;
						vector<int> next;
						next.push_back(nowr);
						next.push_back(nowc - 1);
						next.push_back(nowcnt + 1);
						next.push_back(nowwep);
						q.push(next);
					}
				}
				else if (v[nowr][nowc - 1] == 1) {
					vector<int> next;
					next.push_back(nowr);
					next.push_back(nowc - 1);
					next.push_back(nowcnt + 1);
					next.push_back(0);
					q.push(next);
				}
			}
			else {
				if (v[nowr][nowc - 1] == 0) {
					if (check[nowr][nowc - 1] == 0) {
						check[nowr][nowc - 1] = 1;
						vector<int> next;
						next.push_back(nowr);
						next.push_back(nowc - 1);
						next.push_back(nowcnt + 1);
						next.push_back(0);
						q.push(next);
					}
				}
			}
		}
		if (nowr + 1 < n) {
			if (nowwep == 1) {
				if (v[nowr + 1][nowc] == 0) {
					if (check[nowr + 1][nowc] <= 1) {
						check[nowr + 1][nowc] = 2;
						vector<int> next;
						next.push_back(nowr + 1);
						next.push_back(nowc);
						next.push_back(nowcnt + 1);
						next.push_back(nowwep);
						q.push(next);
					}
				}
				else if (v[nowr + 1][nowc] == 1) {
					vector<int> next;
					next.push_back(nowr + 1);
					next.push_back(nowc);
					next.push_back(nowcnt + 1);
					next.push_back(0);
					q.push(next);
				}
			}
			else {
				if (v[nowr + 1][nowc] == 0) {
					if (check[nowr + 1][nowc] == 0) {
						check[nowr + 1][nowc] = 1;
						vector<int> next;
						next.push_back(nowr + 1);
						next.push_back(nowc);
						next.push_back(nowcnt + 1);
						next.push_back(0);
						q.push(next);
					}
				}
			}
		}
		if (nowr - 1 >= 0) {
			if (nowwep == 1) {
				if (v[nowr - 1][nowc] == 0) {
					if (check[nowr - 1][nowc] <= 1) {
						check[nowr - 1][nowc] = 2;
						vector<int> next;
						next.push_back(nowr - 1);
						next.push_back(nowc);
						next.push_back(nowcnt + 1);
						next.push_back(nowwep);
						q.push(next);
					}
				}
				else if (v[nowr - 1][nowc] == 1) {
					vector<int> next;
					next.push_back(nowr - 1);
					next.push_back(nowc);
					next.push_back(nowcnt + 1);
					next.push_back(0);
					q.push(next);
				}
			}
			else {
				if (v[nowr - 1][nowc] == 0) {
					if (check[nowr - 1][nowc] == 0) {
						check[nowr - 1][nowc] = 1;
						vector<int> next;
						next.push_back(nowr - 1);
						next.push_back(nowc);
						next.push_back(nowcnt + 1);
						next.push_back(0);
						q.push(next);
					}
				}
			}
		}
		q.pop();
	}
}
