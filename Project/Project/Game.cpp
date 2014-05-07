#include "Game.h";

 Game::Game()
{
	
		LargeBoard a;

}
bool Game::playeroneturn(ostream& out, istream& in)
{
	bool returned = false;
	int input;
	int board;
	out << "X's Turn: Choose Square to play for:";
	a.printBoard(out);
	in >> board;
	a.printSmallBoard(board, out);
	out << "Choose spot";
	in >> input;
	a.playSpot(board, input, 'X');
	a.printSmallBoard(board, out);
			//bool playSpot(int board, int spot, char icon);
	
	if ((a.checkWinner())=='X')
	{
		out << "player one wins!!";
		returned = true;
	}
	

}
bool Game::playertwoturn(ostream& out, istream& in)
{
	bool returned = false;
	int input;
	int board;
	out << "O's Turn: Choose Square to play for:";
	a.printBoard(out);
	in >> board;
	a.printSmallBoard(board, out);
	out << "Choose spot";
	in >> input;
	a.playSpot(board, input, 'O');
	a.printSmallBoard(board, out);
	if ((a.checkWinner()) == 'O')
	{
		out << "player one wins!!";
		returned = true;
	}
	return returned;

}