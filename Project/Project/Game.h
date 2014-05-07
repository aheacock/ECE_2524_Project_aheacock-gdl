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
 void playeroneturn(ostream& out, istream& in);
 void playertwoturn(ostream& out, istream& in);

	int checkforwin();
	

};


#endif