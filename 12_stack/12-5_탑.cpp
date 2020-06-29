#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	vector<int> ans;
	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		for (int j = i; j >= -1; j--) {
			if (j == -1) {
				ans.push_back(j + 1);
				break;
			}
			if (v[i] < v[j]) {
				ans.push_back(j + 1);
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
}
