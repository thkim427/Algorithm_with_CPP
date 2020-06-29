#include <iostream>
using namespace std;

typedef struct Stack{
	int d[100];
	int len;
	int capacity;

	void create(int x) {
		capacity = x;
		len = -1;
	}
	void push(int x) {
		if (len >= capacity - 1) cout << "Overflow";
		else d[++len] = x;
	}
	void pop() {
		if (len < 0) cout << "Underflow";
		else len--;
	}
	void top() {
		if (len < 0) cout << "NULL";
		else cout << d[len];
	}
	int size() {
		if (len < 0) return 0;
		else return len + 1;
	}
}Stack;

int main()
{
	Stack s;
	int n, m;
	int a, b;
	cin >> n >> m;
	s.create(n);
	while (m--) {
		cin >> a;
		switch (a)
		{
			case 1:
				cin >> b;
				s.push(b);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.top();
				break;
		}
	}
}