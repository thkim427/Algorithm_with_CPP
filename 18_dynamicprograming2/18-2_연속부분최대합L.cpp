#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	vector<int> s = v;
	for (int i = 1; i < n; i++) s[i] = max(s[i - 1] + v[i], v[i]);
	cout << *max_element(s.begin(), s.end());
}