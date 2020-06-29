/*
[Problem]
Let's write a program that prints out what value is given in [A][B] of a given two-dimensional array of N*M.
(However, use a 2-dimensional array)

[Input]
In the first row, the number N of natural rows and the number M of columns are given.
(1<=N,M<=100) An array of N*M is given from the second row, and A,B is given in the last row. (0<=A<N, 0<=B<M)
 
[Output]
In the first line, the value of [A][B] of the N*M array is displayed.

[Example input]
3 4 1 2 3 4 5 6 7 8 9 10 11 12 1 1

[Example output]
6

[Example input]
4 3 1 2 3 4 5 6 7 8 9 10 11 12 3 2

[Example output]
12
*/

#include <iostream>
using namespace std;
int main()
{
	int n, m;
	int a[101][101];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> n >> m;
	cout << a[n][m];
}
