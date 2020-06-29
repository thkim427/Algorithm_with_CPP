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
	
	cin >> a >> b;
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
			if (t<=9) {
				c.push_back(t +'0');
				carry = false;
				blen--;
			}
			else {
				c.push_back(t % 10 +'0');
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

	for (int i = c.length() - 1; i >= 0; i--) {
		cout << c[i];
	}

}
