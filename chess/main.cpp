#include "Header.h"
#include <iostream>

using namespace std;

int main()
{
	chess c1;
	bool win = c1.playgame();
	while (win == false)
	{
		win=c1.playgame();
	}
	return 0;

}