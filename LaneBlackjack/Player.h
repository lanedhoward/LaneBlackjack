#pragma once
#include "Deck.h"
#include <vector>

class Player
{
private:
	Deck& m_deck;
	int m_handTotal;
	int m_aces;
public:
	Player(Deck& deck);
	int Turn();
	void Think();
	void Reset();
	void Hit();
};

