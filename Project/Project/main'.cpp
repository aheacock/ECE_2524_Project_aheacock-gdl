#include "LargeBoard.h"

using std::cout;
using std::cin;
int main()
{
	LargeBoard b;
	b.printBoard(cout);
	int big = 0;
	cin >> big;
	cout << endl;
	int small = 0;
	cin >> small;
	cout << endl;
	b.playSpot(big, small, 'X');
	b.playSpot(big, small+1, 'X');
	b.playSpot(big, small+2, 'X');
	b.printSmallBoard(big, cout);
	b.printBoard(cout);

	return 0;
}