/*
[Problem]
When N is given, let's write the following program.

[Input]
The natural number N is given in the first line (1<=N<=100).

[Output]
Let's write with reference to examples.

[Example input]
3

[Example output]
1 2 4 3 5 6

[Example input]
5

[Example output]
1 2 4 7 11 3 5 8 12 6 9 13 10 14 15
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	int temp;
	int start = 1;
	int stp1 = 1;
	int stp2 = 2;
	cin >> n;

	while (n--) {
		temp = start;
		for (int i = 0; i <= n; i++) {
			cout << start << " ";
			start = start + stp1;
			stp1 += 1;
		}
		start = temp + stp2;
		stp1 = stp2;
		stp2 += 1;
		cout << "\n";
	}
}
