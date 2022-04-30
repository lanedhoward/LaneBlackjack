#include "Player.h"

Player::Player(Deck* deck)
{
	m_deck = deck;
	Reset();
}

void Player::Reset()
{
	m_aces = 0;
	m_handTotal = 0;

}

int Player::Turn()
{
	//draw two cards !!
	Hit();
	Hit();

	//think !! make decisions !! execute the strategy !! play the game !!
	Think();

	// think is recursive, once it is done, return hand total

	//handle total score w/ aces counting. thhis loop should catch any stand.
	int temp_total = 0;
	for (int i = m_aces; i >= 0; i--)
	{
		//check if we can get to 21 or under by counting our aces as 11 (adding 10).
		temp_total = m_handTotal + 10 * i;
		if (temp_total <= 21) return temp_total;
	}

	//this one should only happen for busts
	return m_handTotal;

}

void Player::Hit()
{
	int n = m_deck->Draw();

	if (n == 1)
	{
		//drew ace
		m_aces += 1;
	}

	m_handTotal += n;

}

void Player::Think()
{

	// player Think is just running through the official "dealer's play" from the blackjack rules
	// https://bicyclecards.com/how-to-play/blackjack/

	if (m_handTotal >= 17) return;
	if (m_aces > 0)
	{
		int temp_total = 0;
		for (int i = m_aces; i > 0; i--)
		{
			//check if we can get to 17 or higher by counting our aces as 11 (adding 10).
			temp_total = m_handTotal + 10 * i;
			if (temp_total >= 17 && temp_total <= 21) return;
		}
	}

	//not between 17 and 21, so hit and then think again
	Hit();
	Think();

}