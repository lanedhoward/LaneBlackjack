#pragma once
#include <vector>

using namespace std;

class Deck
{
public:
	
	/*
	since this assignment only wants the results of the games,
	and blackjack doesn't really care about suit, only value,
	i just made the deck a vector of ints with values 1-10.
	*/

	vector<int> deck;

	Deck();
	void Populate();
	void Shuffle();
	int Draw();
	void Reset();
};

