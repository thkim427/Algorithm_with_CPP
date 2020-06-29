#include <iostream>
#include <set>
using namespace std;

set<int> a;
set<int> inv;
set<int> ans;
set<int>::iterator it;

void s3();
void s2(int n);
void s1b2(int n);
void s1b1(int n);
void s1(int n);
void b3(int n);
void b2(int n);
void b1(int n);
void f3(int n);

int main()
{
	int m, num, s, b, f;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				if (i != j && j != k && k != i) {
					m = 100 * i + 10 * j + k;
					a.insert(m);
				}
			}
		}
	}
	inv = a;
	ans = a;

	cin >> m;
	while (m--) {
		cin >> num >> s >> b;
		f = 3 - s - b;
		if (s == 3) {
			s3();
		}
		else if (s == 2) {
			s2(num);
			inv = a;
		}
		else if (s == 1 && b == 2) {
			s1b2(num);
			inv = a;
		}
		else if (s == 1 && b == 1) {
			s1b1(num);
			inv = a;
		}
		else if (s == 1) {
			s1(num);
			inv = a;
		}
		else if (b == 3) {
			b3(num);
			inv = a;
		}
		else if (b == 2) {
			b2(num);
			inv = a;
		}
		else if (b == 1) {
			b1(num);
			inv = a;
		}
		else {
			f3(num);
			inv = a;
		}
	}
	
	cout << ans.size();
}


void s3() {
	cout << 1;
	exit(0);
}


void s2(int n) {
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	int t;

	for (int i = 1; i < 10; i++) {
		if (i != n1 && i != n2 && i != n3) {
			t = n1 * 100 + n2 * 10 + i;
			inv.erase(t);
			t = i * 100 + n2 * 10 + n3;
			inv.erase(t);
			t = n1 * 100 + i * 10 + n3;
			inv.erase(t);
		}
	}

	for (it = inv.begin(); it != inv.end(); it++) {
		ans.erase(*it);
	}
}


void s1b2(int n) {
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	int t;

	t = n1 * 100 + n3 * 10 + n2;
	inv.erase(t);
	t = n3 * 100 + n2 * 10 + n1;
	inv.erase(t);
	t = n2 * 100 + n1 * 10 + n3;
	inv.erase(t);

	for (it = inv.begin(); it != inv.end(); it++) {
		ans.erase(*it);
	}
}


void s1b1(int n) {
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	int t;

	for (int i = 1; i < 10; i++) {
		if (i != n1 && i != n2 && i != n3) {
			t = n1 * 100 + i * 10 + n2;
			inv.erase(t);
			t = n1 * 100 + n3 * 10 + i;
			inv.erase(t);
			t = n3 * 100 + n2 * 10 + i;
			inv.erase(t);
			t = i * 100 + n2 * 10 + n1;
			inv.erase(t);
			t = n2 * 100 + i * 10 + n3;
			inv.erase(t);
			t = i * 100 + n1 * 10 + n3;
			inv.erase(t);
		}
	}

	for (it = inv.begin(); it != inv.end(); it++) {
		ans.erase(*it);
	}
}


void s1(int n) {
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	int t;

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (i != n1 && i != n2 && i != n3) {
				if (j != n1 && j != n2 && j != n3) {
					if (i != j) {
						t = n1 * 100 + i * 10 + j;
						inv.erase(t);
						t = i * 100 + n2 * 10 + j;
						inv.erase(t);
						t = i * 100 + j * 10 + n3;
						inv.erase(t);
					}
				}
			}
		}
	}

	for (it = inv.begin(); it != inv.end(); it++) {
		ans.erase(*it);
	}
}


void b3(int n) {
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	int t;

	t = n1 * 100 + n3 * 10 + n2;
	inv.erase(t);
	t = n2 * 100 + n1 * 10 + n3;
	inv.erase(t);
	t = n2 * 100 + n3 * 10 + n1;
	inv.erase(t);
	t = n3 * 100 + n1 * 10 + n2;
	inv.erase(t);
	t = n3 * 100 + n2 * 10 + n1;
	inv.erase(t);
	
	for (it = inv.begin(); it != inv.end(); it++) {
		ans.erase(*it);
	}
}


void b2(int n) {
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	int t;

	for (int i = 1; i < 10; i++) {
		if (i != n1 && i != n2 && i != n3) {
			t = n1 * 100 + n2 * 10 + i;
			inv.erase(t);
			t = n1 * 100 + i * 10 + n2;
			inv.erase(t);
			t = n2 * 100 + n1 * 10 + i;
			inv.erase(t);
			t = n2 * 100 + i * 10 + n1;
			inv.erase(t);
			t = i * 100 + n1 * 10 + n2;
			inv.erase(t);
			t = i * 100 + n2 * 10 + n1;
			inv.erase(t);

			t = n3 * 100 + n2 * 10 + i;
			inv.erase(t);
			t = n3 * 100 + i * 10 + n2;
			inv.erase(t);
			t = n2 * 100 + n3 * 10 + i;
			inv.erase(t);
			t = n2 * 100 + i * 10 + n3;
			inv.erase(t);
			t = i * 100 + n3 * 10 + n2;
			inv.erase(t);
			t = i * 100 + n2 * 10 + n3;
			inv.erase(t);

			t = n1 * 100 + n3 * 10 + i;
			inv.erase(t);
			t = n1 * 100 + i * 10 + n3;
			inv.erase(t);
			t = n3 * 100 + n1 * 10 + i;
			inv.erase(t);
			t = n3 * 100 + i * 10 + n1;
			inv.erase(t);
			t = i * 100 + n1 * 10 + n3;
			inv.erase(t);
			t = i * 100 + n3 * 10 + n1;
			inv.erase(t);
		}
	}

	for (it = inv.begin(); it != inv.end(); it++) {
		ans.erase(*it);
	}
}


void b1(int n) {
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	int t;

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (i != n1 && i != n2 && i != n3) {
				if (j != n1 && j != n2 && j != n3) {
					if (i != j) {
						t = i * 100 + n1 * 10 + j;
						inv.erase(t);
						t = j * 100 + n1 * 10 + i;
						inv.erase(t);
						t = i * 100 + j * 10 + n1;
						inv.erase(t);
						t = j * 100 + i * 10 + n1;
						inv.erase(t);

						t = n2 * 100 + i * 10 + j;
						inv.erase(t);
						t = n2 * 100 + j * 10 + i;
						inv.erase(t);
						t = i * 100 + j * 10 + n2;
						inv.erase(t);
						t = j * 100 + i * 10 + n2;
						inv.erase(t);

						t = n3 * 100 + i * 10 + j;
						inv.erase(t);
						t = n3 * 100 + j * 10 + i;
						inv.erase(t);
						t = i * 100 + n3 * 10 + j;
						inv.erase(t);
						t = j * 100 + n3 * 10 + i;
						inv.erase(t);
					}
				}
			}
		}
	}

	for (it = inv.begin(); it != inv.end(); it++) {
		ans.erase(*it);
	}
}


void f3(int n) {
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	int t;

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = 1; k < 10; k++) {
				if (i != n1 && i != n2 && i != n3) {
					if (j != n1 && j != n2 && j != n3) {
						if (k != n1 && k != n2 && k != n3) {
							if (i != j && j != k && k != i) {
								t = i * 100 + j * 10 + k;
								inv.erase(t);
							}
						}
					}
				}
			}
		}
	}

	for (it = inv.begin(); it != inv.end(); it++) {
		ans.erase(*it);
	}
}