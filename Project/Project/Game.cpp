#include "Game.h";

 Game::Game()
{
	
		LargeBoard a;

}
void Game::playeroneturn(ostream& out, istream& in)
{
	int input;
	int board;
	out << "X's Turn: Choose Square to play for:";
	in >> board;
	a.printSmallBoard(board, out);
	out << "Choose spot";
	in >> input;
	a.playSpot(board, input, 'X');

			//bool playSpot(int board, int spot, char icon);
	
	if ((a.checkWinner())=='X')
	{
		out << "player one wins!!";
	}
	

}
void Game::playertwoturn(ostream& out, istream& in)
{
	int input;
	int board;
	out << "O's Turn: Choose Square to play for:";
	in >> board;
	a.printSmallBoard(board, out);
	out << "Choose spot";
	in >> input;
	a.playSpot(board, input, 'O');

	if ((a.checkWinner()) == 'O')
	{
		out << "player one wins!!";
	}

}