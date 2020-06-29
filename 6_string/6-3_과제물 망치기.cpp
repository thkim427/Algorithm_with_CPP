#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	string::iterator it;
	getline(cin, a);
	for (it=a.begin(); it < a.end(); it++) {
		if (*it == ' ') {
			a.erase(it);
		}
	}
	cout << a;
}
