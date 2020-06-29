#include <string>
#include <iostream>
using namespace std;
int main()
{
	string a;
	string b;
	string::size_type n;
	cin >> a >> b;
	n = a.find(b);
	if (n == string::npos) {
		cout << "NO";
	}
	else cout << "YES";
}
