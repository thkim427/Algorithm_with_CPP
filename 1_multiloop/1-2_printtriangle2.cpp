/*
[Problem]
Write a program that prints n-layer triangles. See the examples of Input and Output.

[Input]
The integer n is given in the first line. (0≤n≤100)

[Output]
As shown in the following example,'*' is output in a triangular shape. (Please check the number of blanks and the number of stars correctly.)

[Example input]
3

[Example output]
  *
 **
***

[Example input]
6

[Example output]
     *
    **
   ***
  ****
 *****
******
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1 ; j > 0; j--) {
			cout << " ";
		}
		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		cout << "\n";
	}
	
}

