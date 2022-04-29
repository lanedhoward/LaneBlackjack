// LaneBlackjack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include <iostream>
#include "Game.h"
#include "ConsoleUtils.h"
#include "Deck.h"


int main()
{
    std::cout << "Hello World!\n";

    Deck d = Deck();

	ConsoleUtils::Print(std::to_string(d.deck.size()));
	
	for (size_t i = 0; i < d.deck.size(); i++)
	{
		ConsoleUtils::Print(std::to_string(d.deck[i]));
	}
	
	for (size_t i = 0; i < 4; i++)
	{
		ConsoleUtils::Print("Draw: " + std::to_string(d.Draw()));
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
