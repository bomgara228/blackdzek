#include "card.h"
#include "hand.h"
#include "deck.h"
#include "player.h"
#include "dealer.h"
#include "game.h"
#include <iostream>
#include <ctime>


using namespace std;

int main() {
	srand(time(0));
	rand();

	Game game;
	game.play();

	

	return 0;
}