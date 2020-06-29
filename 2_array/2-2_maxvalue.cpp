/*
[Problem]
Given nine different natural numbers, write a program to find the maximum of these and find the number of the maximum. For example, given nine different natural numbers 3, 29, 38, 12, 57, 74, 40, 85, 61, the maximum of these is 85, and this value is the 8th number.

[Input]
From the first line to the ninth line, one natural number is given per line. The natural number given is less than 100.

[Output]
The maximum value is printed on the first line, and the number of the maximum value is printed on the second line.

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
85
8
*/

#include <iostream>
using namespace std;

int main()
{
	int idx=0;
	int max=0;
	int a[10];

	for (int i = 1; i <= 9; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= 9; i++) {
		if (a[i] >= max) {
			max = a[i];
			idx = i;
		}
	}
	cout << max << "\n" << idx;

}
