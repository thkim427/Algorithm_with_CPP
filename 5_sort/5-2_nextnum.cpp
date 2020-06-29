#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	while(1){
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) {
			return 0;
		}
		else if (c / b == b / a) {
			cout << "GP " << c * c / b;
		}
		else if (c - b == b - a) {
			cout << "AP " << c + c - b;
		}
	}

}
