#include <iostream>
#include <string>
using namespace std;
bool check[30] = {false};
char result[11];
int n, r;
void np(int x) {
	if (x >= r) {
		cout << result << '\n';
	}
	else {
		for (int i = 0; i < n; i++) {
			char alpha = i + 'a';
			if (check[i] == false) {
				result[x] = alpha;
				check[i] = true;
				np(x + 1);
				check[i] = false;
				result[x] = 0;
			}
		}
	}
}
int main()
{
	cin >> n >> r;
	result[n] = '\0';
	np(0);
}
