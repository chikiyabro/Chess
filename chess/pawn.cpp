#include "Header.h"
#include <iostream>

using namespace std;


bool pawn::valid_move(int x1,int y1,int x2,int y2,keys *** &board)
{
	
	if(move_2 == true)
	{
		if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
		{
			if((board[x1+1][y1]==nullptr ) && (x2==x1+1) &&( y2==y1))
			{
				move_2 = false;
				return true;
			}
			if((board[x1+2][y1]==nullptr ) && (x2==x1+2) &&( y2==y1))
			{
				move_2 = false;
				return true;
			}
			if(y1-1>0)
			{
				if((board[x1+1][y1-1]!=nullptr &&( board[x1+1][y1-1]->getname()>'a' && board[x1+1][y1-1]->getname()<'z') ) && (x2==x1+1) &&( y2==y1-1))
				{
					move_2 = false;
					return true;
				}
			}
			if(y1+1<8)
			{
				if((board[x1+1][y1+1]!=nullptr && ( board[x1+1][y1-1]->getname()>'a' && board[x1+1][y1-1]->getname()<'z')) && (x2==x1+1) &&( y2==y1+1))
				{
					move_2 = false;
					return true;
				}
			}
		}
		else
		{
			if((board[x1-1][y1]==nullptr ) && (x2==x1-1) &&( y2==y1))
				{
					move_2 = false;
					return true;
			}
			if((board[x1-2][y1]==nullptr ) && (x2==x1-2) &&( y2==y1))
			{
				move_2 = false;
				return true;
			}
			if(y1-1>0)
			{
				if((board[x1-1][y1-1]!=nullptr && ( board[x1-1][y1-1]->getname()>'A' && board[x1-1][y1-1]->getname()<'Z')) && (x2==x1-1) &&( y2==y1-1))
				{
					move_2 = false;
					return true;
				}
			}
			if(y1+1<8)
			{
				if((board[x1-1][y1+1]!=nullptr && ( board[x1-1][y1+1]->getname()>'A' && board[x1-1][y1+1]->getname()<'Z')) && (x2==x1-1) &&( y2==y1+1))
				{
					move_2 = false;
					return true;
				}
			}
		}
		return false;
		
	}

	else
	{
		if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
		{
			if(x1+1<8)
			{
				if((board[x1+1][y1]==nullptr ) && (x2==x1+1) &&( y2==y1))
					return true;
			}
			if(y1-1>=0)
			{
				if((board[x1+1][y1-1]!=nullptr && ( board[x1+1][y1-1]->getname()>'a' && board[x1+1][y1-1]->getname()<'z')) && (x2==x1+1) &&( y2==y1-1))
					return true;
			}
			if(y1+1<8)
			{
				if((board[x1+1][y1+1]!=nullptr && ( board[x1+1][y1+1]->getname()>'a' && board[x1+1][y1+1]->getname()<'z')) && (x2==x1+1) &&( y2==y1+1))
					return true;
			}
		}
		else
		{
			if(x1-1>=0)
			{
				if((board[x1-1][y1]==nullptr ) && (x2==x1-1) &&( y2==y1))
					return true;
			}
			if(y1-1>=0)
			{
				if((board[x1-1][y1-1]!=nullptr && ( board[x1-1][y1-1]->getname()>'A' && board[x1-1][y1-1]->getname()<'Z')) && (x2==x1-1) &&( y2==y1-1))
					return true;
			}
			if(y1+1<8)
			{
				if((board[x1-1][y1+1]!=nullptr && ( board[x1-1][y1+1]->getname()>'A' && board[x1-1][y1+1]->getname()<'Z')) && (x2==x1-1) &&( y2==y1+1))
					return true;
			}
		}
		return false;
	}

}
bool pawn::move(int x1,int y1,int x2,int y2,keys *** & board)
{
	if(board[x2][y2] == nullptr)
	{
		board[x2][y2] = board[x1][y1];
		board[x1][y1] = nullptr;
	}
	else if((board[x2][y2] != nullptr) && (board[x2][y2]->getname()!='K') && (board[x2][y2]->getname()!='k'))
	{
		delete board[x2][y2];
		board [x2][y2] = board[x1][y1];
		board[x1][y1] = nullptr;
	}
	else
	{
		cout<<"\nCannot kill THE KING !!\n";
		return false;
	}
	return true;
}
pawn::pawn(char a,int b,int c)
{
	move_2 = true;
	setname(a);
	set_x(b);
	set_y(c);
}