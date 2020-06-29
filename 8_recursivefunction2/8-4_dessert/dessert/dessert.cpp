#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
int cnt = 0;

int cal(vector<int> a, string b) {
	int sum = a[0];
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '+') {
			sum += a[i + 1];
		}
		else if (b[i] == '-') {
			sum -= a[i + 1];
		}
	}
	return sum;
}


void des(int x, vector<int> a, string b, string c){ 
	int t = 0;
	if (x > n) {
		if (cal(a, b) == 0) {
			for (int i = 0; i < n - 1; i++) {
				cout << i + 1 << " " << c[i] << " ";
			}
			cout << n << '\n';
			cnt++;
			if (cnt >= 20) {
				exit(0);
			}
		}
		return;
	}

	a.push_back(x);
	b.push_back('+');
	c.push_back('+');
	des(x + 1, a, b, c);
	a.pop_back();
	b.pop_back();
	c.pop_back();

	a.push_back(x);
	b.push_back('-');
	c.push_back('-');
	des(x + 1, a, b, c);
	a.pop_back();
	b.pop_back();
	c.pop_back();

	t = a[a.size() - 1];
	a[a.size()-1] = a[a.size() - 1] * 10 + x;
	c.push_back('.');
	des(x + 1, a, b, c);
	a[a.size() - 1] = t;
	c.pop_back();

}


int main()
{
	vector<int> a;
	string b;
	string c;
	cin >> n;
	if (n == 1) {
		cout << 1;
		return 0;
	}
	a.push_back(1);
	des(2, a, b, c);
	cout << cnt;
}
