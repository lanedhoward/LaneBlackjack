#pragma once
#include <string>
#include "Deck.h"
class Game
{

public:
	Deck gameDeck;

	Game();
	std::string Run();
	void Reset();
};

