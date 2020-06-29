#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int save = 1;
	int state = 1;
	stack<char> a;
	string s;
	cin >> s;
	int sum = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			state *= 2;
			a.push('(');
		}
		else if (s[i] == '[') {
			state *= 3;
			a.push('[');
		}
		else if (s[i] == ')') {
			if (a.empty() == true) {
				cout << 0;
				return 0;
			}
			else if (a.top() == '(') {
				if (s[i - 1] == ')' || s[i - 1] == ']') {
					state /= 2;
					a.pop();
				}
				else if (s[i - 1] >= '0' && s[i - 1] <= '9') {
					state /= 2;
					a.pop();
				}
				else {
					sum += state;
					state /= 2;
					a.pop();
				}
			}
		}
		else if (s[i] == ']') {
			if (a.empty() == true) {
				cout << 0;
				return 0;
			}
			else if (a.top() == '[') {
				if (s[i - 1] == ')' || s[i - 1] == ']') {
					state /= 3;
					a.pop();
				}
				else if (s[i - 1] >= '0' && s[i - 1] <= '9') {
					state /= 3;
					a.pop();
				}
				else {
					sum += state;
					state /= 3;
					a.pop();
				}
			}
		}
		else {
			sum += state * (s[i] - '0');
		}
	}
	if (a.empty() == true) cout << sum;
	else cout << '0';
}
