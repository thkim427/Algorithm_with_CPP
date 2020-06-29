#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef struct {
	int parent;
}tree;

int main()
{
	tree t[1000];
	queue<int> q;
	vector<int> v;
	int n, m;
	cin >> n;
	int a, b;
	cin >> a >> b;
	m = n - 1;
	while (m--) {
		int p, c;
		cin >> p >> c;
		t[c].parent = p;
	}

	q.push(a);
	q.push(b);
	v.push_back(a);
	v.push_back(b);

	while (q.empty()!=true) {
		int now = q.front();
		if (now == 0) break;
		for (int i = 0; i < v.size(); i++) {
			if (t[now].parent == v[i]) {
				cout << v[i];
				return 0;
			}
		}
		q.pop();
		v.push_back(t[now].parent);
		q.push(t[now].parent);
	}
}