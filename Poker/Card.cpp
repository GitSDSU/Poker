#include "stdafx.h"
#include "Card.h"
#include <iostream>
#include <string>


Card::Card(int r, int s)
{
	rank = r;
	suit = s;
}


Card::~Card()
{
}


void Card::Display() const
{
	std::string rankStr[] = { "A", "2", "3", "4", "5", "6", "7", "8", "T", "J", "Q", "K" };
	std::string suitStr[] = { "S", "C", "D", "H" };
	std::cout << rankStr[rank] << suitStr[suit];
}
