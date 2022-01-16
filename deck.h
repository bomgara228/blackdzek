#pragma once
#include "hand.h"

class Deck :public Hand {
private:
	void shuffle() {
		int size = m_hand.size();
		for (int i = 0; i < size; i++) {
			int rnd = rand() % size;
			std::swap(m_hand[i], m_hand[rnd]);
		}
	}
	void generate() {
		for (int i = Card::TWO; i < Card::MAX_RANK; i++) {
			for (int j = Card::CLUBS; j < Card::MAX_SUIT; j++) {
				Card tmp(static_cast<Card::CardRank>(i),
					static_cast<Card::CardSuit>(j));
				m_hand.push_back(tmp);
			}
		}
	}
public:
	Deck() {
		m_hand.reserve(52);
		generate();
		shuffle();
	}
	Card pop() {
		Card tmp = m_hand.back();
		m_hand.pop_back();
		return tmp;
	}
};