/*
[Problem]
This is a problem of receiving an integer as an input and outputting the received number backwards.

[Input]
The first number of inputs is the number n of numbers. (1 <= n <= 1000) On the next line, numbers are given as input. Each number ranges from -10000 <n <10000.

[Output]
Prints the number received on one line upside down.

[Example input]
5
1 2 3 4 5

[Example output]
5 4 3 2 1

[Example input]
8
1 -2 3 4 6 8 2 1

[Example output]
1 2 8 6 4 3 -2 1
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	int a[1001];
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = n; i > 0; i--) {
		cout << a[i] << " ";
	}

}
