#pragma once
#include <memory>
#include <deque>
#include <algorithm>
#include <random>
class Card;
typedef std::shared_ptr< Card > PtrCard;
typedef std::deque< PtrCard > DequeCard;
enum Rank { _A, _2, _3, _4, _5, _6, _7, _8, _9, _T, _J, _Q, _K, CountRank };
enum Suit { _S, _C, _D, _H, CountSuit };
class Deck
{
public:
	Deck();
	~Deck();
	int Cards_In_Deck() const;
	void Shuffle();
	PtrCard Grab_Card();
	void Pop_Card();
private:
	DequeCard deck;
};

