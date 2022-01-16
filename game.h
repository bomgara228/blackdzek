#pragma once
#include "player.h"
#include "dealer.h"
#include <ctime>

class Game {
private:
	Deck d1;
	Player p1;
	Dealer di1;
public:
	
	void play(){
		p1.play(d1);
		if (p1.canContinue()) {
			di1.play(d1);
			if (di1.canContinue()) {
				if (p1.getScore() == di1.getScore()) {
					std::cout << "Dealer win!" << std::endl;
				}
				else if (p1.getScore() < di1.getScore()) {
					std::cout << "Dealer win!" << std::endl;
				}
				else if (p1.getScore() > di1.getScore()) {
					std::cout << "You win!" << std::endl;
				}
			}
		}
	}
};