#include <iostream>
#include <vector>
using namespace std;

typedef struct {
	int left;
	int right;
}tree;

tree t[100];

void preorder(int x){
	if (t[x].left == -1 && t[x].right == -1) {
		cout << x;
		return;
	}
	else {
		cout << x;
		if (t[x].left != -1) preorder(t[x].left);
		if (t[x].right != -1) preorder(t[x].right);
	}
}
void inorder(int x){
	if (t[x].left == -1 && t[x].right == -1) {
		cout << x;
		return;
	}
	else {
		if (t[x].left != -1) inorder(t[x].left);
		cout << x;
		if (t[x].right != -1) inorder(t[x].right);
	}
}
void postorder(int x) {
	if (t[x].left == -1 && t[x].right == -1) {
		cout << x;
		return;
	}
	else {
		if (t[x].left != -1) postorder(t[x].left);
		if (t[x].right != -1) postorder(t[x].right);
		cout << x;
	}
}

int main()
{
	int n, m;
	cin >> n;
	m = n;
	while (m--) {
		int n, l, r;
		cin >> n >> l >> r;
		t[n].left = l;
		t[n].right = r;
	}

	preorder(0);
	cout << "\n";
	inorder(0);
	cout << "\n";
	postorder(0);
}
