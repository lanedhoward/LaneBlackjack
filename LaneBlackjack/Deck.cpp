#include "Deck.h"

Deck::Deck()
{
	Reset();
}

void Deck::Populate()
{
	deck.clear();
	
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 1; j <= 13; j++)
		{
			deck.push_back(std::min<int>(j, 10));
		}
	}

}

void Deck::Shuffle()
{
	// knuth-fisher-yates shuffle adapted from https://blog.codinghorror.com/the-danger-of-naivete/
	for (size_t i = deck.size()-1; i > 0; i--)
	{
		int n = rand() % (i + 1);

		int temp = deck[i];
		deck[i] = deck[n];
		deck[n] = temp;
	}
}

int Deck::Draw()
{
	int drawn = deck.back();
	deck.pop_back();
	return drawn;
}

void Deck::Reset()
{
	Populate();
	Shuffle();
}