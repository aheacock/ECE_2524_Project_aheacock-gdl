#ifndef GAME_H
#define GAME_H

#include<string>
#include<iostream>
#include "LargeBoard.h"

using std::istream;
using std::string;
using std::ostream;
class Game
{
private:
	LargeBoard a;


public:
	Game();
	bool playeroneturn(ostream& out, istream& in);
	bool playertwoturn(ostream& out, istream& in);

	int checkforwin();
	

};


#endif