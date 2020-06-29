/*
[Problem]
Write a program that takes a number and outputs it in binary.

[Input]
Enter a number on the first line. The number is less than or equal to 1,000.
 
[Output]
The number on the first line is converted to binary and printed.

[Example input]
14

[Example output]
1110

[Example input]
31

[Example output]
11111
*/

#include <iostream>
#include <deque>
using namespace std;
int main()
{
	deque<int> dq;
	long long n;
	int add;
	cin >> n;
	while (1) {
		add = n % 2;
		dq.push_front(add);
		if (n / 2 == 1) {
			dq.push_front(1);
			break;
		}
		n = n / 2;
	}
	for (int i = 0; i < dq.size(); i++) {
		cout << dq[i];
	}

}
