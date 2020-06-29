/*
[Problem]
Write a program that prints out all the prime numbers from n to m when a natural number n,m is given. Here, a prime number means a number in which only the divisor is 1 and itself.

[Input]
In the first line, natural numbers n and m are given. (1≤n,m≤20,000)

[Output]
Print all decimals from n to m on the first line.
 
[Example input]
1 10

[Example output]
2 3 5 7

[Example input]
13 30

[Example output]
13 17 19 23 29
*/

#include <iostream>
using namespace std;

int main()
{
	int n, m;
	bool a[1000001];

	cin >> n >> m;
	
	for (int i = 0; i <= m; i++) {
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;

	for (int i = 2; i <= m; i++) {
		for (int j = 2; i*j <= m; j++) {
				a[j*i] = 0;
		}
	}
	
	for (int i = n; i <= m; i++) {
		if (a[i]) {
			cout << i << " ";
		}
	}
	
}

