#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	int ans1, ans2;
	int r, na, nb;
	cin >> a >> b >> c >> d;
	
	na = a * d + b * c;
	ans1 = na;
	nb = b * d;
	ans2 = nb;
	r = na % nb;
	while (na % nb) {
		r = na % nb;
		na = nb;
		nb = r;
	}
	cout << ans1 / r << " " << ans2 / r;
}


