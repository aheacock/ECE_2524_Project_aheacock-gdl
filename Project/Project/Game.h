#ifndef GAME_H
#define GAME_H

#include<string>
#include<iostream>
#include "LargeBoard.h"

using std::string;
using std::ostream;
class Game
{
private:
	LargeBoard a;


public:
 Game();
 void playeroneturn(ostream& out);
 void playertwoturn(ostream& out);

	int checkforwin();
	

};


#endif