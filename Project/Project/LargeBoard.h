#ifndef LARGEBOARD_H
#define LARGEBOARD_H

#include<string>
#include<iostream>
#include "Board.h"
using std::string;
using std::ostream;
using std::endl;
class LargeBoard
{
private:
	Board board[3][3];
	void getCoordinates(int& x, int& y, int spot);

public:
	LargeBoard();
	void printBoard(ostream& out);
	bool checkDraw() const;
	char checkWinner() const;
	bool playSpot(int board, int spot, char icon);


};


#endif