#pragma once
#include <memory>
#include <vector>
class Card;
class Deck;
typedef std::shared_ptr< Card > PtrCard;
typedef std::vector< PtrCard > VectorCard;
class Player
{
public:
	Player();
	~Player();
	void Receive_Card(Deck &);
private:
	VectorCard hand;
};

