#include <iostream>
#include <string>
using namespace std;

int n;

bool check(string s) {
	string a, b;
	for (int i = 1; i <= s.length() / 2; i++) {
		for (int j = 0; j < s.length() - i; j++) {
			a = s.substr(j, i);
			b = s.substr(j + i, i);
			if (a == b) return false;
		}
	}
	return true;
}

void make(string s, int x) {
	if (check(s) == false) return;
	if (x >= n) {
		cout << s;
		exit(0);
	}
	for (int i = 0; i < 3; i++) {
		s.push_back('1' + i);
		make(s, x + 1);
		s.pop_back();
	}
}

int main()
{
	string s;
	cin >> n;
	make(s, 0);
}