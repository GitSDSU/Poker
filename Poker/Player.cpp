#include "stdafx.h"
#include "Player.h"
#include "Deck.h"


Player::Player()
{
}


Player::~Player()
{
}


void Player::Receive_Card(Deck &deck)
{
	hand.push_back(deck.Grab_Card());
	deck.Pop_Card();
}
