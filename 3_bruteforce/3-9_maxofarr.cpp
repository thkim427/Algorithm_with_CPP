#include <iostream>
using namespace std;
int main()
{
	int a[9][9];
	int n;
	int max = 0;
	int v, h;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
			if (max < a[i][j]) {
				max = a[i][j];
				v = i;
				h = j;
			}
		}
	}
	cout << max << "\n" << v+1 << " " << h+1;
}
