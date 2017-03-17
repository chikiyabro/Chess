#include "Header.h"
#include <iostream>

using namespace std;

bishop::bishop(char a,int b,int c)
{
	setname(a);
	set_x(b);
	set_y(c);
}
bool bishop::valid_move(int x1,int y1,int x2,int y2,keys *** & board)
{
	for(int i=1;(x1+i<8) && (y1+i<8);i++)
		{
			if((board[x1+i][y1+i] == nullptr) && (x2 == x1+i) && (y2 == y1+i))
			{
				return true;
			}
			else if((board[x1+i][y1+i] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+i][y1+i]->getname()>'a' && board[x1+i][y1+i]->getname()<'z') && (x2 == x1+i) && (y2 == y1+i))
					{
						return true;
					}
					else if(board[x1+i][y1+i]->getname()>'A' && board[x1+i][y1+i]->getname()<'Z' && (x2 == x1+i) && (y2 == y1+i))
						return false;
					break;
				}
				else
				{	if((board[x1+i][y1+i]->getname()>'A' && board[x1+i][y1+i]->getname()<'Z') && (x2 == x1+i) && (y2 == y1+i))
					{
						return true;
					}
					else if(board[x1+i][y1+i]->getname()>'a' && board[x1+i][y1+i]->getname()<'z' && (x2 == x1+i) && (y2 == y1+i))
						return false;
					break;

				}
			}
		}
		for(int i=1;(x1-i>=0) && (y1-i>=0);i++)
		{
			if((board[x1-i][y1-i] == nullptr) && (x2 == x1-i) && (y2 == y1-i))
			{
				return true;
			}
			else if((board[x1-i][y1-i] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-i][y1-i]->getname()>'a' && board[x1-i][y1-i]->getname()<'z') && (x2 == x1-i) && (y2 == y1-i))
					{
						return true;
					}
					else if(board[x1-i][y1-i]->getname()>'A' && board[x1-i][y1-i]->getname()<'Z' && (x2 == x1-i) && (y2 == y1-i))
						return false;
					break;
				}
				else
				{	if((board[x1-i][y1-i]->getname()>'A' && board[x1-i][y1-i]->getname()<'Z') && (x2 == x1-i) && (y2 == y1-i))
					{
						return true;
					}
					else if(board[x1-i][y1-i]->getname()>'a' && board[x1-i][y1-i]->getname()<'z' && (x2 == x1-i) && (y2 == y1-i))
						return false;
					break;

				}
			}
		}
		for(int i=1;(y1+i<8) && (x1-i>=0);i++)
		{
			if((board[x1-i][y1+i] == nullptr) && (x2 == x1-i) && (y2 == y1+i))
			{
				return true;
			}
			else if((board[x1-i][y1 + i] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-i][y1+i]->getname()>'a' && board[x1-i][y1+i]->getname()<'z') && (x2 == x1-i) && (y2 == y1+i))
					{
						return true;
					}
					else if(board[x1-i][y1+i]->getname()>'A' && board[x1-i][y1+i]->getname()<'Z' && (x2 == x1-i) && (y2 == y1+i))
						return false;
					break;
				}
				else
				{
					if((board[x1-i][y1+i]->getname()>'A' && board[x1-i][y1+i]->getname()<'Z') && (x2 == x1-i) && (y2 == y1+i))
					{
						return true;
					}
					else if(board[x1-i][y1+i]->getname()>'a' && board[x1-i][y1+i]->getname()<'z' && (x2 == x1-i) && (y2 == y1+i))
						return false;
					break;
				}
			}
		}
		for(int i=1;(y1 - i>=0) && (x1+ i <8);i++)
		{
			if((board[x1+ i][y1-i] == nullptr) && (x2 == x1+ i) && (y2 == y1-i))
			{
				return true;
			}
			else if((board[x1+ i][y1 -i] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+ i][y1-i]->getname()>'a' && board[x1+ i][y1-i]->getname()<'z') && (x2 == x1+ i) && (y2 == y1-i))
					{
						return true;
					}
					else if(board[x1+ i][y1-i]->getname()>'A' && board[x1+ i][y1-i]->getname()<'Z' && (x2 == x1+ i) && (y2 == y1-i))
						return false;
					break;
				}
				else
				{
					if((board[x1+ i][y1-i]->getname()>'A' && board[x1+ i][y1-i]->getname()<'Z') && (x2 == x1+ i) && (y2 == y1-i))
					{
						return true;
					}
					else if(board[x1+ i][y1-i]->getname()>'a' && board[x1+ i][y1-i]->getname()<'z' && (x2 == x1+ i) && (y2 == y1-i))
						return false;
					break;
				}
			}
		}
	return false;
}

bool bishop::move(int x1,int y1,int x2,int y2,keys ***& board)
{
	if(board[x2][y2] == nullptr)
	{
		board[x2][y2] = board[x1][y1];
		board[x1][y1] = nullptr;
		return true;
	}
	else if((board[x2][y2] != nullptr) && (board[x2][y2]->getname()!='K') && (board[x2][y2]->getname()!='k'))
	{
		delete board[x2][y2];
		board [x2][y2] = board[x1][y1];
		board[x1][y1] = nullptr;
		return true;
	}
	else
	{
		cout<<"\nCannot kill THE KING !!\n";
		return false;
	}
}