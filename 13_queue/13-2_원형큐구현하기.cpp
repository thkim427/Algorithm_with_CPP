#include <iostream>
using namespace std;

typedef struct {
	int data[100];
	int capacity;
	int f, r;
	int size;

	void create(int x) {
		capacity = x;
		f = 0;
		r = 0;
		size = 0;
	}
	void push(int x) {
		if (size >= capacity) {
			cout << "Overflow" << "\n";
		}
		else {
			data[r] = x;
			r = (r + 1) % capacity;
			size++;
		}
	}
	void pop() {
		if (size <= 0) cout << "Underflow" << "\n";
		else {
			f = (f + 1) % capacity;
			size--;
		}
	}
	void front() {
		if (size <= 0) cout << "NULL" << "\n";
		else cout << data[f];
	}
}queue;

int main()
{
	int n, m;
	queue q;
	cin >> n >> m;
	q.create(n);
	while (m--) {
		int t;
		cin >> t;
		switch (t)
		{
		case 1: {
			int k;
			cin >> k;
			q.push(k);
			break;
		}
		case 2: {
			q.pop();
			break;
		}
		case 3: {
			q.front();
			break;
		}
		default:
			break;
		}
	}
}