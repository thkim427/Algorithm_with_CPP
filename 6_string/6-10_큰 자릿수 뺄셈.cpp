#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	string b;
	string c;
	char t;
	int alen, blen;
	bool carry = false;
	bool flag = false;

	cin >> a >> b;
	alen = a.length() - 1;
	blen = b.length() - 1;

	if (alen < blen) {
		for (int i = 0; i < a.length(); i++) {
			if (carry == false) {
				t = b[blen] - a[alen];
				alen--;
				blen--;
			}
			else {
				t = b[blen] - a[alen] - 1;
				alen--;
				blen--;
			}
			if (t >= 0) {
				c.push_back(t + '0');
				carry = false;
			}
			else {
				c.push_back(t + '0' + 10);
				carry = true;
			}
		}
		for (int i = 0; i < b.length() - a.length(); i++) {
			if (carry == true) {
				t = b[blen] - '0' - 1;
			}
			else {
				t = b[blen] - '0';
			}
			if (t >= 0) {
				c.push_back(t + '0');
				carry = false;
				blen--;
			}
			else {
				c.push_back(t + '0' + 10);
				carry = true;
				blen--;
			}
		}
		int j = c.length() - 1;
		while (c[j]=='0') {
			j--;
		}
		cout << '-';
		for (int i = j; i >= 0; i--) {
			cout << c[i];
		}
	}


	else if (alen > blen) {
		for (int i = 0; i < b.length(); i++) {
			if (carry == false) {
				t = a[alen] - b[blen];
				alen--;
				blen--;
			}
			else {
				t = a[alen] - b[blen] - 1;
				alen--;
				blen--;
			}
			if (t >= 0) {
				c.push_back(t + '0');
				carry = false;
			}
			else {
				c.push_back(t + '0' + 10);
				carry = true;
			}
		}
		for (int i = 0; i < a.length() - b.length(); i++) {
			if (carry == true) {
				t = a[alen] - '0' - 1;
			}
			else {
				t = a[alen] - '0';
			}
			if (t >= 0) {
				c.push_back(t + '0');
				carry = false;
				alen--;
			}
			else {
				c.push_back(t + '0' + 10);
				carry = true;
				alen--;
			}
		}

		for (int i = 0; i < c.length(); i++) {
			if (c[i] != '0') {
				flag = true;
			}
		}
		if (flag == false) {
			cout << '0';
			return 0;
		}
		for (int i = c.length() - 1; i >= 0; i--) {
			if (i == c.length() - 1 && c[i] == '0')continue;
			cout << c[i];
		}
	}


	else {
		if (a > b) {
			for (int i = 0; i < a.length(); i++) {
				if (carry == false) {
					t = a[alen] - b[blen];
					alen--;
					blen--;
				}
				else {
					t = a[alen] - b[blen] - 1;
					alen--;
					blen--;
				}
				if (t >= 0) {
					c.push_back(t + '0');
					carry = false;
				}
				else {
					c.push_back(t + '0' + 10);
					carry = true;
				}
			}
			int j = c.length() - 1;
			while (c[j] == '0') {
				j--;
			}
			for (int i = j; i >= 0; i--) {
				cout << c[i];
			}
		}
		else {
			for (int i = 0; i < a.length(); i++) {
				if (carry == false) {
					t = b[blen] - a[alen];
					alen--;
					blen--;
				}
				else {
					t = b[blen] - a[alen] - 1;
					alen--;
					blen--;
				}
				if (t >= 0) {
					c.push_back(t + '0');
					carry = false;
				}
				else {
					c.push_back(t + '0' + 10);
					carry = true;
				}
			}
			for (int i = 0; i < c.length(); i++) {
				if (c[i] != '0') {
					flag = true;
				}
			}
			if (flag == false) {
				cout << '0';
				return 0;
			}
			int j = c.length() - 1;
			while (c[j] == '0') {
				j--;
			}
			cout << '-';
			for (int i = j; i >= 0; i--) {
				cout << c[i];
			}
		}
	}
}
