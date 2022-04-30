#include "Game.h"
#include "Deck.h"

Game::Game()
{
	//make players and deck
	// i just did this in the header bc it was giving me errors
	// because the Player doesnt have a default constructor
	// so it couldn't be defined in the header without the constructor with arguments?
	/*
	gameDeck = Deck();
	ptrDeck = &gameDeck;
	player = Player(ptrDeck);
	dealer = Player(ptrDeck);
	*/

	playerWins = 0;
	dealerWins = 0;
	ties = 0;

}

std::string Game::Run()
{
	

	Reset();

	int playerScore = player.Turn();

	int dealerScore = dealer.Turn();

	string Winner;
	if (playerScore <= 21)
	{
		//player didnt bust

		if (dealerScore <= 21)
		{
			//neither busted
			//player wins if higher total
			// ties are possible
			if (playerScore > dealerScore)
			{
				Winner = "Player wins.";
				playerWins += 1;
			}
			else if (playerScore == dealerScore)
			{
				Winner = "Standoff (Tie).";
				ties += 1;
			}
			else
			{
				Winner = "Dealer wins.";
				dealerWins += 1;
			}

		}
		else
		{
			//player no bust, dealer busted
			//player wins
			Winner = "Player wins.";
			playerWins += 1;
		}
	}
	else
	{
		//player busted
		//any time player busts, they lose.

		if (dealerScore <= 21)
		{
			// player busted, dealer didn't
			// player loses, dealer wins
			Winner = "Dealer wins.";
			dealerWins += 1;
		}
		else
		{
			//both busted
			// player loses

			Winner = "Dealer wins.";
			dealerWins += 1;

		}
	}

	return "Player score: " + std::to_string(playerScore) + " Dealer score: " + std::to_string(dealerScore) + " " + Winner;
}

void Game::Reset()
{
	// reset deck and players
	gameDeck.Reset();
	player.Reset();
	dealer.Reset();
}

string Game::DisplayWins()
{
	return "Player wins: " + std::to_string(playerWins) + " Dealer wins: " + std::to_string(dealerWins) + " Standoffs (Ties): " + std::to_string(ties);
}