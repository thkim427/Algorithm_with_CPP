/*
[Problem]
Given 9 different natural numbers, write a program that finds the second minimum of these and finds the number of the second minimum. For example, given nine different natural numbers 3, 29, 38, 12, 57, 74, 40, 85, 61, the second minimum of these is 12, and this is the fourth number.

[Input]
From the first line to the ninth line, one natural number is given per line. The natural number given is less than 10,000,000.

[Output]
Print the second minimum value on the first line and the number of the second minimum value on the second line.

[Example input]
3
29
38
12
57
74
40
85
61

[Example output]
12
4
*/

#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int min1 = 10000000, min2 = 10000000;
	int idx1, idx2;
	for (int i = 1; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < 10; i++) {
		if (a[i] < min1) {
			min1 = a[i];
			idx1 = i;
		}
		else if (a[i] < min2) {
			min2 = a[i];
			idx2 = i;
		}
	}
	cout << min2 << " " << idx2;
}
