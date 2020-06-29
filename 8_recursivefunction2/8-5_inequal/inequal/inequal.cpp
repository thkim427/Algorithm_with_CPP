#include <iostream>
#include <vector>
using namespace std;

bool check[10] = { false };
int n;
vector<char> b;
bool flag = false;

void ine(int x, vector<int> a) {
	if (x >= n) {
		for (int i = 0; i < a.size(); i++) {
			cout << a[i];
		}
		cout << "\n";
		flag = true;
		return;
	}
	else {
		if (flag == true) return;
		for (int i = 9; i >= 0; i--) {
			if (b[x] == '>') {
				if (a[x] > i&&check[i] == false) {
					if (flag == true) return;
					a.push_back(i);
					check[i] = true;
					ine(x + 1, a);
					a.pop_back();
					check[i] = false;
				}
			}
			else {
				if (a[x] < i&&check[i] == false) {
					if (flag == true) return;
					a.push_back(i);
					check[i] = true;
					ine(x + 1, a);
					a.pop_back();
					check[i] = false;
				}
			}
		}
	}
}


void ine2(int x, vector<int> a) {
	if (x >= n) {
		for (int i = 0; i < a.size(); i++) {
			cout << a[i];
		}
		cout << "\n";
		flag = true;
		return;
	}
	else {
		if (flag == true) return;
		for (int i = 0; i <= 9; i++) {
			if (b[x] == '>') {
				if (a[x] > i&&check[i] == false) {
					if (flag == true) return;
					a.push_back(i);
					check[i] = true;
					ine2(x + 1, a);
					a.pop_back();
					check[i] = false;
				}
			}
			else {
				if (a[x] < i&&check[i] == false) {
					if (flag == true) return;
					a.push_back(i);
					check[i] = true;
					ine2(x + 1, a);
					a.pop_back();
					check[i] = false;
				}
			}
		}
	}
}


int main()

{
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		b.push_back(c);
	}
	
	for (int i = 9; i >= 0; i--) {
		if (flag == true) break;
		check[i] = true;
		a.push_back(i);
		ine(0,a);
		check[i] = false;
		a.pop_back();
	}
	flag = false;
	for (int i = 0; i <= 9; i++) {
		if (flag == true) break;
		check[i] = true;
		a.push_back(i);
		ine2(0, a);
		check[i] = false;
		a.pop_back();
	}

}
