#pragma once
class Card
{
public:
	Card(int, int);
	~Card();
	void Display() const;
private:
	int rank;
	int suit;
};

