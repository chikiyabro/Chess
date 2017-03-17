#include "Header.h"
#include <iostream>

using namespace std;


knight::knight(char a,int b,int c)
{
	setname(a);
	set_x(b);
	set_y(c);
}

bool knight::valid_move(int x1,int y1,int x2,int y2,keys*** & board)
{
	if(x1+2<8)
	{
		if(y1+1<8)
		{
			if((board[x1+2][y1+1] == nullptr) && (x2 == x1+2) && (y2 == y1+1))
			{
				return true;
			}
			else if((board[x1+2][y1 +1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+2][y1+1]->getname()>'a' && board[x1+2][y1+1]->getname()<'z') && (x2 == x1+2) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1+2][y1+1]->getname()>'A' && board[x1+2][y1+1]->getname()<'Z' && (x2 == x1+2) && (y2 == y1+1))
						return false;
				}
				else
				{
					if((board[x1+2][y1+1]->getname()>'A' && board[x1+2][y1 +1]->getname()<'Z') && (x2 == x1+2) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1+2][y1+1]->getname()>'a' && board[x1+2][y1+1]->getname()<'z' && (x2 == x1+2) && (y2 == y1+1))
						return false;
				}
			}	
		}
		if(y1-1>=0)
		{
			if((board[x1+2][y1-1] == nullptr) && (x2 == x1+2) && (y2 == y1-1))
			{
				return true;
			}
			else if((board[x1+2][y1 -1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+2][y1-1]->getname()>'a' && board[x1+2][y1-1]->getname()<'z') && (x2 == x1+2) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1+2][y1-1]->getname()>'A' && board[x1+2][y1-1]->getname()<'Z' && (x2 == x1+2) && (y2 == y1-1))
						return false;
				}
				else
				{
					if((board[x1+2][y1-1]->getname()>'A' && board[x1+2][y1 -1]->getname()<'Z') && (x2 == x1+2) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1+2][y1-1]->getname()>'a' && board[x1+2][y1-1]->getname()<'z' && (x2 == x1+2) && (y2 == y1-1))
						return false;
				}
			}
		}
	}



	if(x1-2>=0)
	{
		if(y1+1<8)
		{
			if((board[x1-2][y1+1] == nullptr) && (x2 == x1-2) && (y2 == y1+1))
			{
				return true;
			}
			else if((board[x1-2][y1 +1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-2][y1+1]->getname()>'a' && board[x1-2][y1+1]->getname()<'z') && (x2 == x1-2) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1-2][y1+1]->getname()>'A' && board[x1-2][y1+1]->getname()<'Z' && (x2 == x1-2) && (y2 == y1+1))
						return false;
				}
				else
				{
					if((board[x1-2][y1+1]->getname()>'A' && board[x1-2][y1 +1]->getname()<'Z') && (x2 == x1-2) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1-2][y1+1]->getname()>'a' && board[x1-2][y1+1]->getname()<'z' && (x2 == x1-2) && (y2 == y1+1))
						return false;
				}
			}	
		}
		if(y1-1>=0)
		{
			if((board[x1-2][y1-1] == nullptr) && (x2 == x1-2) && (y2 == y1-1))
			{
				return true;
			}
			else if((board[x1-2][y1 -1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-2][y1-1]->getname()>'a' && board[x1-2][y1-1]->getname()<'z') && (x2 == x1-2) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1-2][y1-1]->getname()>'A' && board[x1-2][y1-1]->getname()<'Z' && (x2 == x1-2) && (y2 == y1-1))
						return false;
				}
				else
				{
					if((board[x1-2][y1-1]->getname()>'A' && board[x1-2][y1 -1]->getname()<'Z') && (x2 == x1-2) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1-2][y1-1]->getname()>'a' && board[x1-2][y1-1]->getname()<'z' && (x2 == x1-2) && (y2 == y1-1))
						return false;
				}
			}
		}
	}



	if(y1+2<8)
	{
		if(x1+1<8)
		{
			if((board[x1+1][y1+2] == nullptr) && (x2 == x1+1) && (y2 == y1+2))
			{
				return true;
			}
			else if((board[x1+1][y1 +2] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+1][y1+2]->getname()>'a' && board[x1+1][y1+2]->getname()<'z') && (x2 == x1+1) && (y2 == y1+2))
					{
						return true;
					}
					else if(board[x1+1][y1+2]->getname()>'A' && board[x1+1][y1+2]->getname()<'Z' && (x2 == x1+1) && (y2 == y1+2))
						return false;
				}
				else
				{
					if((board[x1+1][y1+2]->getname()>'A' && board[x1+1][y1 +2]->getname()<'Z') && (x2 == x1+1) && (y2 == y1+2))
					{
						return true;
					}
					else if(board[x1+1][y1+2]->getname()>'a' && board[x1+1][y1+2]->getname()<'z' && (x2 == x1+1) && (y2 == y1+2))
						return false;
				}
			}	
		}
		if(x1-1>=0)
		{
			if((board[x1-1][y1+2] == nullptr) && (x2 == x1-1) && (y2 == y1+2))
			{
				return true;
			}
			else if((board[x1-1][y1 +2] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-1][y1+2]->getname()>'a' && board[x1-1][y1+2]->getname()<'z') && (x2 == x1-1) && (y2 == y1+2))
					{
						return true;
					}
					else if(board[x1-1][y1+2]->getname()>'A' && board[x1-1][y1+2]->getname()<'Z' && (x2 == x1-1) && (y2 == y1+2))
						return false;
				}
				else
				{
					if((board[x1-1][y1+2]->getname()>'A' && board[x1-1][y1 +2]->getname()<'Z') && (x2 == x1-1) && (y2 == y1+2))
					{
						return true;
					}
					else if(board[x1-1][y1+2]->getname()>'a' && board[x1-1][y1+2]->getname()<'z' && (x2 == x1-1) && (y2 == y1+2))
						return false;
				}
			}
		}
	}


	if(y1-2>=0)
	{
		if(x1+1<8)
		{
			if((board[x1+1][y1-2] == nullptr) && (x2 == x1+1) && (y2 == y1-2))
			{
				return true;
			}
			else if((board[x1+1][y1 -2] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+1][y1-2]->getname()>'a' && board[x1+1][y1-2]->getname()<'z') && (x2 == x1+1) && (y2 == y1-2))
					{
						return true;
					}
					else if(board[x1+1][y1-2]->getname()>'A' && board[x1+1][y1-2]->getname()<'Z' && (x2 == x1+1) && (y2 == y1-2))
						return false;
				}
				else
				{
					if((board[x1+1][y1-2]->getname()>'A' && board[x1+1][y1 -2]->getname()<'Z') && (x2 == x1+1) && (y2 == y1-2))
					{
						return true;
					}
					else if(board[x1+1][y1-2]->getname()>'a' && board[x1+1][y1-2]->getname()<'z' && (x2 == x1+1) && (y2 == y1-2))
						return false;
				}
			}	
		}
		if(x1-1>=0)
		{
			if((board[x1-1][y1-2] == nullptr) && (x2 == x1-1) && (y2 == y1-2))
			{
				return true;
			}
			else if((board[x1-1][y1 -2] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-1][y1-2]->getname()>'a' && board[x1-1][y1-2]->getname()<'z') && (x2 == x1-1) && (y2 == y1-2))
					{
						return true;
					}
					else if(board[x1-1][y1-2]->getname()>'A' && board[x1-1][y1-2]->getname()<'Z' && (x2 == x1-1) && (y2 == y1-2))
						return false;
				}
				else
				{
					if((board[x1-1][y1-2]->getname()>'A' && board[x1-1][y1 -2]->getname()<'Z') && (x2 == x1-1) && (y2 == y1-2))
					{
						return true;
					}
					else if(board[x1-1][y1-2]->getname()>'a' && board[x1-1][y1-2]->getname()<'z' && (x2 == x1-1) && (y2 == y1-2))
						return false;
				}
			}
		}
	}
	return false;
}

bool knight::move(int x1,int y1,int x2,int y2,keys*** & board)
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