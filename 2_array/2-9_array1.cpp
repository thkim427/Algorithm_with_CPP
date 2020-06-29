/*
[Problem]
Given the number of rows N and the number of columns M, let's write a program that outputs as follows. (However, use a 2-dimensional array)

[Input]
The natural number N,M is given in the first line (1<=N,M<=100).

[Output]
Output in the same format as the output example.

[Example input]
3 4

[Example output]
1 2 3 4 5 6 7 8 9 10 11 12

[Example input]
4 3

[Example output]
1 2 3 4 5 6 7 8 9 10 11 12

[Example input]
5 5

[Example output]
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
*/

#include <iostream>
using namespace std;
int main()
{
	int n, m;
	int num = 1;
	cin >> n >> m;
	int a[101][101];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = num;
			num++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
