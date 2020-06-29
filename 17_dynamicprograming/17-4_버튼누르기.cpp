#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	vector<vector<int>> time;
	int n, m;
	cin >> n;
	time.resize(n);
	for (int i = 0; i < n; i++) time[i].resize(3);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++) 
			cin >> time[j][i];

	vector<vector<int>> ans = time;

	for (int c = 1; c < n; c++) {
		for (int r = 0; r < 3; r++) {
			switch (r)
			{
			case 0: 
				ans[0][c] = max(ans[1][c - 1], ans[2][c - 1]) + time[0][c];
				break;
			case 1: 
				ans[1][c] = max(ans[0][c - 1], ans[2][c - 1]) + time[1][c];
				break;
			case 2: 
				ans[2][c] = max(ans[0][c - 1], ans[1][c - 1]) + time[2][c];
				break;
			}
		}
	}

	cout << max({ ans[0][n - 1],ans[1][n - 1],ans[2][n - 1] });

}