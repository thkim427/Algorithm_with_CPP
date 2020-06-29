#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<vector<int>> v;
	int r, c, n;
	cin >> r >> c >> n;
	v.resize(r);
	for(int i=0;i<r;i++) v[i].resize(c);
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> v[i][j];
	vector<vector<int>> sv = v;

	for (int i = 1; i < c; i++) sv[0][i] = sv[0][i - 1] + v[0][i];
	for (int i = 1; i < r; i++) sv[i][0] = sv[i - 1][0] + v[i][0];
	for (int i = 1; i < r; i++)
		for (int j = 1; j < c; j++)
			sv[i][j] = sv[i - 1][j] + sv[i][j - 1] + v[i][j] - sv[i - 1][j - 1];

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << sv[i][j] << " ";
		}
		cout << "\n";
	}
	
	int a, b, c1, d;
	while (n--) {
		int sum = 0;
		cin >> a >> b >> c1 >> d;
		sum += sv[c1][d];
		if (a > 0) sum -= sv[a - 1][d];
		if (b > 0) sum -= sv[c1][b - 1];
		if (a > 0 && b > 0) sum += sv[a - 1][b - 1];
		cout << sum << "\n";
	}	
}
