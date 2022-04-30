#pragma once
#include "Deck.h"

class Player
{
private:
	Deck* m_deck;

	/*
	since the "cards" are just ints, i decided to only keep track of the total
	and not the actual cards in the hand. 
	aces are counted as 1 in the handTotal, but are later checked as 11 to see if that gets a better score.
	*/

	int m_handTotal;
	int m_aces;
public:
	Player(Deck* deck);
	int Turn();
	void Think();
	void Reset();
	void Hit();
};

