/*
In the game of contract bridge, each of four players is dealt 13 cards, thus exhausting the
entire deck. Modify the CARDARAY program in this chapter so that, after shuffling the
deck, it deals four hands of 13 cards each. Each of the four players’ hands should then be
displayed.
*/
//author @Nishant

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

enum Suit {clubs, diamonds, hearts, spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card{
	private:
		int number;
		Suit suit;
	public:
		card() {};
		void set(int n, Suit s);
		void display(void);
};

int main(){
	card deck[52];
	int j;
	for(int j = 0; j < 52; j++){
		int num = (j % 13) + 2;
		Suit su = Suit(j / 13);
		deck[j].set(num, su);
	}
	srand(time(NULL));
	for(int j = 0; j < 52; j++){
		int k = rand() % 52;
		card temp = deck[j];
		deck[j] = deck[k];
		deck[k] = temp;
	}
	const int PLAYERS = 4;
	const int CARDS_OF_PLAYER = 52 / 4;
	card bridge[PLAYERS][CARDS_OF_PLAYER];
	for(int i = 0; i < PLAYERS; i++)
		for(int j = 0; j < CARDS_OF_PLAYER; j++)
			bridge[i][j] = deck[i * CARDS_OF_PLAYER + j];
	for(int i = 0; i < PLAYERS; i++){
		cout << "Player No." << i + 1 << ": ";
		for(int j = 0; j < CARDS_OF_PLAYER; j++)
			bridge[i][j].display();
		cout << endl;
	}
	return 0;
}

void card::set(int n, Suit s){
	suit = s;
	number = n;
}

void card::display(void){
	cout << setw(4);
	if(number >= 2 && number <= 10)
		cout << number;
	else{
		switch(number){
			case jack: cout << 'J'; break;
			case queen: cout << 'Q'; break;
			case king: cout << 'K'; break;
			case ace: cout << 'A'; break;
		}
	}
	switch(suit){
		case clubs: cout << "♣"; break;
		case diamonds: cout << "♦"; break;
		case hearts: cout << "♥"; break;
		case spades: cout << "♠"; break;
	}
}