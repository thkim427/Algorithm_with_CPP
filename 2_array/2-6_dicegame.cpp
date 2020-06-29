/*
[Problem]
There is a game where you throw 3 dice with 1 to 6 eyes and win prizes according to the following rules.
* Rule 3 (1) If three eyes appear, you will receive a prize of 10,000 won (same eye) * 1,000 won.
* Rule (2) If only two eyes appear, you will receive a prize of 1,000 won (same eye) * 100 won.
* In the case of rule (3), if all other eyes come out (the largest of them), you will receive a prize of 100 won.
For example, if 3 eyes 3, 3, and 6 are given, the prize money is calculated as 1,000 3 * 100, and 1,300 won is received. In addition,
if 3 eyes are given as 2, 2, 2, it is calculated as 10,000 2 * 1,000 and receives 12,000 won. If 3 eyes are given as 6, 2, and 5,
the largest value among them is 6, so it is calculated as 6 * 100, and 600 won will be awarded.
Write a program that prints out the winnings of the people with the most prizes when N (2≤N≤1,000) players participate in the dice game.

[Input]
In the first row, the number of participants is given, and from the next row on the N rows, three eyes where people roll the dice are given with spaces between each.
 
[Print]
On the first line, print out the prize money of the person who received the most prize.
 
[Example input]
33 3 62 2 26 2 5

[Example output]
12000
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int a, b, c;
	int m = 0;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		if (a == b && b == c && c == a) {
			m = max(m, 10000 + a * 1000);
		}
		else if (a != b && b != c && c != a) {
			m = max(m, max({ a,b,c })*100);
		}
		else {
			if (a == b) {
				m = max(m, 1000 + a * 100);
			}
			else if (b == c) {
				m = max(m, 1000 + b * 100);
			}
			else {
				m = max(m, 1000 + c * 100);
			}
		}
	}
	cout << m;
}

