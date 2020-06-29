#include <iostream>
using namespace std;
int main()
{
	int n, m, o;
	int s = 1;
	int sx, sy, ex, ey;
	int a[101][101] = {};
	int b[100] = {};
	cin >> n;
	m = n;
	o = n;

	while(n--){
		cin >> sy >> sx >> ey >> ex; 
		for (int i = sy; i <= ey; i++) {
			for (int j = sx; j <= ex; j++) {
				a[i][j] = s;
			}
		}
		s++;
	}

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			b[a[i][j]]++;
		}
	}
	

	for (int i = 1; i <= o; i++) {
		cout << b[i] <<"\n";
	}
}

