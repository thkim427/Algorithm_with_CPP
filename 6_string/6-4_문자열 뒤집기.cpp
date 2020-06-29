#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	string b(a);
	for (int i = 0; i < a.length();i++) {
		b[a.length() - i - 1] = a[i];
	}
	cout << b;
}
