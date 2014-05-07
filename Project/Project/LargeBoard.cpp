#include "LargeBoard.h"


LargeBoard::LargeBoard()
{
	Board board[3][3];
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

bool LargeBoard::playSpot(int boardSpot, int spot, char icon)
{
	bool returned = false;
	if (icon == 'X' || icon == 'O')
	{
		int x1, y1, x2, y2;
		getCoordinates(x1, y1, boardSpot);
		getCoordinates(x2, y2, spot);
		returned = board[y1][x1].placeChecker(x2, y2, icon);
	}
	return returned;
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

void LargeBoard::printBoard(ostream& out)
{

	out << "     |     |     " << endl;
	out << "  " << board[0][0].checkWinner() << "  |  " << board[0][1].checkWinner() << "  |  " << board[0][2].checkWinner() << endl;

	out << "_____|_____|_____" << endl;
	out << "     |     |     " << endl;

	out << "  " << board[1][0].checkWinner() << "  |  " << board[1][1].checkWinner() << "  |  " << board[1][2].checkWinner() << endl;

	out << "_____|_____|_____" << endl;
	out << "     |     |     " << endl;

	out << "  " << board[2][0].checkWinner() << "  |  " << board[2][1].checkWinner() << "  |  " << board[2][2].checkWinner() << endl;

	out << "     |     |     " << endl << endl;
}