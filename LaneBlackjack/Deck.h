#pragma once
#include <vector>

using namespace std;

class Deck
{
public:
	
	vector<int> deck;

	Deck();
	void Populate();
	void Shuffle();
	int Draw();
	void Reset();
};

