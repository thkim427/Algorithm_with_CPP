/*
[Problem]
The two people, A and B, play the game with ten cards, numbered one through one.
The game consists of a total of ten'rounds', and each round presents one of the cards you have,
and discards the card you presented once.
The game win or loss is determined as follows.
Each round wins if the person who gives the higher number wins, and if the number given is the same.
The player who wins the more rounds in 10 rounds wins the game and draws if the number of rounds won is the same.
The following is an example of the game, showing the number of cards presented by A and B for each round and the winner of each round.
(Draw rounds are marked with D)
A wins the game because A wins in 5 rounds and B wins in 4 rounds.
Write a program to judge the winner of the game given the number of cards presented by A and B in the order of the round.

[Input]
The following information is given as standard input.
In the first row, 10 numbers of cards presented by A are given in round order,
and in the second row, 10 numbers of cards presented by B are given in round order.

[Output]
Print the following information to standard output. If the win or loss of the game is determined, the winner is output, and if it is drawn, D is output.

[Example input]
6 7 5 1 4 10 2 3 8 9 1 10 2 9 4 8 3 7 5 6

[Example output]
A

[Example input]
1 2 3 4 5 6 7 8 9 105 4 3 2 1 10 9 8 7 6

[Example output]
D
*/


#include <iostream>
using namespace std;
int main()
{
	int scr[10];
	int a[10];
	int b[10];
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			scr[i] = 1;
		}
		else if (a[i] == b[i]) {
			scr[i] = 0;
		}
		else scr[i] = -1;
	}
	for (int i = 0; i < 10; i++) {
		sum += scr[i];
	}
	if (sum > 0) {
		cout << "A";
	}
	else if (sum == 0) {
		cout << "D";
	}
	else {
		cout << "B";
	}

	
}