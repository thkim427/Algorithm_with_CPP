/*
[Problem]

The OX problem is a problem with two correct or incorrect answers.
In the case of successive answers in tests made with multiple OX questions, 
the score was calculated as follows in order to add points.
If problem 1 is correct, it is counted as 1 point.
The answer to the previous question is incorrect, and the first question that is correct is counted as 1 point. In addition, if the answer to the question is correct in succession, the second question is calculated as 2 points, the third question is 3 points, ..., and the Kth question is calculated as K points. A wrong problem counts as 0. For example, in the case of 10 OX questions, the score is calculated as shown in the table below when the answer is correct as 1 in the case of the question that is correct, 
and as 0 in the case of the error, the total score is 1+1+2 +3+1+2=10 points.
Write a program that calculates the total score, given the scores for the test questions.

[Input]
In the first line the number of problems N (1 ≤ N ≤ 100) is given. In the second line, 0 or 1, which is the result of scoring N problems, is given with a space between them. 0 is the wrong answer, 1 is the right answer.

[Output]
In the first line, the total score considering the addition point is displayed for the scoring result given in the input.

[Example input]
10
1 0 1 1 1 0 0 1 1 0

[Example output]
10

*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[101];
	int scr[101];
	int sum = 0;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= 100; i++) {
		scr[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) {
			scr[i] = scr[i - 1] + 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		sum += scr[i];
	}
	cout << sum;

}

