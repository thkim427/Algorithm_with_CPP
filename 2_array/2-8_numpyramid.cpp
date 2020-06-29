/*
[Problem]
Write a program that creates a numeric pyramid given N and the starting number S.
For example, if N is 5 and S is 3, the number pyramid is 
3 456 21987 3456789 987654321

[Input]
The first line of input is given N and the starting number S. (1≤N≤100, 1 ≤S≤ 9)

[Output]
Print the number pyramid from the first line. (Please check the number of blanks and the number of blanks in each line.)

[Example input]
5 3

[Example output]
3 456 21987 3456789 987654321
*/

#include <iostream>
#include <deque>
using namespace std;
int main()
{
	deque<int> dq;
	deque<int> tmp;
	int n, s;
	int pn;
	cin >> n >> s;

	for (int j = 0; j < 12; j++) {
		for (int i = 1; i <= 9; i++) {
			dq.push_back(i);
		}
	}
	for (int i = 1; i < s; i++) {
		dq.pop_front();
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		if (i % 2 == 0) {
			for (int j = 0; j < i * 2 + 1; j++) {
				pn = dq.front();
				tmp.push_front(pn);
				dq.pop_front();
			}
			for (int j = 0; j < i * 2 + 1; j++) {
				cout << tmp[j];
			}
			tmp.clear();
		}
		else {
			for (int j = 0; j < i * 2 + 1; j++) {
				pn = dq.front();
				tmp.push_back(pn);
				dq.pop_front();
			}
			for (int j = 0; j < i * 2 + 1; j++) {
				cout << tmp[j];
			}
			tmp.clear();
		}
		cout << "\n";
	}
}
