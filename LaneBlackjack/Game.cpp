#include "Game.h"
#include "Deck.h"

Game::Game()
{
	//make players and deck
}

std::string Game::Run()
{
	gameDeck = Deck();

	Reset();

	return "Test";
}

void Game::Reset()
{
	// reset deck and players
	gameDeck.Reset();

}