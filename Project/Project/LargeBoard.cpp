#include "LargeBoard.h"


LargeBoard::LargeBoard()
{
	
}



char LargeBoard::checkWinner() const
{
	char returned = ' ';
	if (board[0][0].checkWinner() == board[0][1].checkWinner() && board[0][1].checkWinner() == board[0][2].checkWinner())
		returned = board[0][0].checkWinner();
	else if (board[1][0].checkWinner() == board[1][1].checkWinner() && board[1][1].checkWinner() == board[1][2].checkWinner())
		returned = board[1][0].checkWinner();
	else if (board[2][0].checkWinner() == board[2][1].checkWinner() && board[2][1].checkWinner() == board[1][2].checkWinner())
		returned = board[2][0].checkWinner();
	else if (board[0][0].checkWinner() == board[1][0].checkWinner() && board[1][0].checkWinner() == board[2][0].checkWinner())
		returned = board[0][0].checkWinner();
	else if (board[0][1].checkWinner() == board[1][1].checkWinner() && board[1][1].checkWinner() == board[2][1].checkWinner())
		returned = board[0][1].checkWinner();
	else if (board[0][2].checkWinner() == board[1][2].checkWinner() && board[1][2].checkWinner() == board[2][2].checkWinner())
		returned = board[0][2].checkWinner();
	else if (board[0][0].checkWinner() == board[1][1].checkWinner() && board[1][1].checkWinner() == board[2][2].checkWinner())
		returned = board[0][0].checkWinner();
	else if (board[0][2].checkWinner() == board[1][1].checkWinner() && board[1][1].checkWinner() == board[2][0].checkWinner())
		returned = board[0][2].checkWinner();
	return returned;
}

bool LargeBoard::checkDraw() const
{
	bool returned = false;
	if (   board[0][0].checkWinner() != ' ' && board[0][1].checkWinner() != ' ' && board[0][2].checkWinner() != ' '
		&& board[1][0].checkWinner() != ' ' && board[1][1].checkWinner() != ' ' && board[1][2].checkWinner() != ' '
		&& board[2][0].checkWinner() != ' ' && board[2][1].checkWinner() != ' ' && board[2][2].checkWinner() != ' '
		&& checkWinner() == ' ')
	{
		returned = true;
	}
	return returned;
}

bool LargeBoard::playSpot(int board, int spot, char icon)
{
	if (icon == 'X' || icon == 'O')
	{
		int x, y;
		getCoordinates(x, y, board);

	}
}

void LargeBoard::getCoordinates(int& x, int& y, int spot)
{
	if (spot == 1)
	{
		x = 0;
		y = 0;
	}
	else if (spot == 2)
	{
		x = 1;
		y = 0;
	}
	else if (spot == 3)
	{
		x = 2;
		y = 0;
	}
	else if (spot == 4)
	{
		x = 0;
		y = 1;
	}
	else if (spot == 5)
	{
		x = 1;
		y = 1;
	}
	else if (spot == 6)
	{
		x = 2;
		y = 1;
	}
	else if (spot == 7)
	{
		x = 0;
		y = 2;
	}
	else if (spot == 8)
	{
		x = 1;
		y = 2;
	}
	else if (spot == 9)
	{
		x = 2;
		y = 2;
	}
	else
	{
		x = -1;
		y = -1;
	}

}