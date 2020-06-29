#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a, string b);

int main()
{
	string a;
	string b;
	string c = "0";
	string ans = "0";
	bool flag = false;
	cin >> a >> b;
	
	for (int i = b.length() - 1; i >= 0; i--) {
		char t;
		t = b[i] - '0';
		for (int j = 0; j < t; j++) {
			c = add(c, a);
			ans = add(ans, c);
			c = "0";
		}
		a.push_back('0');
	}
	
	for (int i = 0; i < ans.length(); i++) {
		if (ans[i] != '0') {
			flag = true;
		}
	}
	if (flag == false) {
		cout << '0';
		return 0;
	}

	cout << ans;

}

string add(string a, string b) {
	string c;
	char t;
	bool carry = false;
	int alen, blen;
	alen = a.length() - 1;
	blen = b.length() - 1;

	if (alen < blen) {
		for (int i = 0; i < a.length(); i++) {
			if (carry == false) {
				t = a[alen] + b[blen] - 2 * '0';
				alen--;
				blen--;
			}
			else {
				t = a[alen] + b[blen] - 2 * '0' + 1;
				alen--;
				blen--;
			}
			if (t <= 9) {
				c.push_back(t + '0');
				carry = false;
			}
			else {
				c.push_back(t % 10 + '0');
				carry = true;
			}
		}
		for (int i = 0; i < b.length() - a.length(); i++) {
			if (carry == true) {
				t = b[blen] - '0' + 1;
			}
			else {
				t = b[blen] - '0';
			}
			if (t <= 9) {
				c.push_back(t + '0');
				carry = false;
				blen--;
			}
			else {
				c.push_back(t % 10 + '0');
				carry = true;
				blen--;
			}
		}
		if (carry == true) {
			c.push_back('1');
		}
	}


	else if (alen > blen) {
		for (int i = 0; i < b.length(); i++) {
			if (carry == false) {
				t = a[alen] + b[blen] - 2 * '0';
				alen--;
				blen--;
			}
			else {
				t = a[alen] + b[blen] - 2 * '0' + 1;
				alen--;
				blen--;
			}
			if (t <= 9) {
				c.push_back(t + '0');
				carry = false;
			}
			else {
				c.push_back(t % 10 + '0');
				carry = true;
			}
		}
		for (int i = 0; i < a.length() - b.length(); i++) {
			if (carry == true) {
				t = a[alen] - '0' + 1;
			}
			else {
				t = a[alen] - '0';
			}
			if (t <= 9) {
				c.push_back(t + '0');
				carry = false;
				blen--;
			}
			else {
				c.push_back(t % 10 + '0');
				carry = true;
				blen--;
			}
		}
		if (carry == true) {
			c.push_back('1');
		}
	}


	else {
		for (int i = 0; i < a.length(); i++) {
			if (carry == false) {
				t = a[alen] + b[blen] - 2 * '0';
				alen--;
				blen--;
			}
			else {
				t = a[alen] + b[blen] - 2 * '0' + 1;
				alen--;
				blen--;
			}
			if (t <= 9) {
				c.push_back(t + '0');
				carry = false;
			}
			else {
				c.push_back(t % 10 + '0');
				carry = true;
			}
		}
		if (carry == true) {
			c.push_back('1');
		}
	}
	reverse(c.begin(), c.end());
	return c;
}