﻿#include <iostream>
using namespace std;
void mountain(int n) {
	if (n == 1) {
		cout << 1;
	}
	else {
		mountain(n - 1);
		cout << n;
		mountain(n - 1);
	}
}
int main()
{
	int n;
	cin >> n;
	mountain(n);
}