#include "Game.h"

using std::cout;
using std::cin;
int main()
{
	Game game;
	while (true)
	{
		game.playeroneturn(cout, cin);
		game.playertwoturn(cout, cin);


	}
}
