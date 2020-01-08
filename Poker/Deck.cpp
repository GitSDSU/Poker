#include "stdafx.h"
#include "Deck.h"
#include "Card.h"


Deck::Deck()
{
	for (int rank = Rank::_A; rank < CountRank; rank++)
	{
		for (int suit = Suit::_S; suit < CountSuit; suit++)
		{
			deck.push_back(PtrCard(new Card(rank, suit)));
		}
	}
	this->Shuffle();
}


Deck::~Deck()
{
}


int Deck::Cards_In_Deck() const
{
	return deck.size();
}


void Deck::Shuffle()
{
	std::shuffle(deck.begin(), deck.end(), std::random_device());
}


PtrCard Deck::Grab_Card()
{
	PtrCard card = deck.front();
	return card;
}


void Deck::Pop_Card()
{
	deck.pop_front();
}
