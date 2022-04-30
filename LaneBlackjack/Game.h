#pragma once
#include <string>
#include "Deck.h"
#include "Player.h"
class Game
{

public:
	
	Deck gameDeck;
	Deck* ptrDeck = &gameDeck;
	Player player = Player(ptrDeck);
	Player dealer = Player(ptrDeck);

	int playerWins;
	int ties;
	int dealerWins;

	Game();
	std::string Run();
	void Reset();
	std::string DisplayWins();
};

