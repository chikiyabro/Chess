#include "Header.h"
#include <iostream>

using namespace std;


king::king(char a,int b,int c)
{
	setname(a);
	set_x(b);
	set_y(c);
}

bool king::valid_move(int x1,int y1,int x2,int y2,keys*** & board)
{
	if(x1+1<8)
	{
		if((board[x1+1][y1] == nullptr) && (x2 == x1+1) && (y2 == y1))
			{
				return true;
			}
			else if((board[x1+1][y1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+1][y1]->getname()>'a' && board[x1+1][y1]->getname()<'z') && (x2 == x1+1) && (y2 == y1))
					{
						return true;
					}
					else if(board[x1+1][y1]->getname()>'A' && board[x1+1][y1]->getname()<'Z' && (x2 == x1+1) && (y2 == y1))
						return false;
				}
				else
				{
					if((board[x1+1][y1]->getname()>'A' && board[x1+1][y1 ]->getname()<'Z') && (x2 == x1+1) && (y2 == y1))
					{
						return true;
					}
					else if(board[x1+1][y1]->getname()>'a' && board[x1+1][y1]->getname()<'z' && (x2 == x1+1) && (y2 == y1))
						return false;
				}
			}	
		if(y1+1<8)
		{
			if((board[x1+1][y1+1] == nullptr) && (x2 == x1+1) && (y2 == y1+1))
			{
				return true;
			}
			else if((board[x1+1][y1+1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+1][y1+1]->getname()>'a' && board[x1+1][y1+1]->getname()<'z') && (x2 == x1+1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1+1][y1+1]->getname()>'A' && board[x1+1][y1+1]->getname()<'Z' && (x2 == x1+1) && (y2 == y1+1))
						return false;
				}
				else
				{
					if((board[x1+1][y1+1]->getname()>'A' && board[x1+1][y1 +1]->getname()<'Z') && (x2 == x1+1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1+1][y1+1]->getname()>'a' && board[x1+1][y1+1]->getname()<'z' && (x2 == x1+1) && (y2 == y1+1))
						return false;
				}
			}	
		}
		if(y1-1>=0)
		{
			if((board[x1+1][y1-1] == nullptr) && (x2 == x1+1) && (y2 == y1-1))
			{
				return true;
			}
			else if((board[x1+1][y1 -1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+1][y1-1]->getname()>'a' && board[x1+1][y1-1]->getname()<'z') && (x2 == x1+1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1+1][y1-1]->getname()>'A' && board[x1+1][y1-1]->getname()<'Z' && (x2 == x1+1) && (y2 == y1-1))
						return false;
				}
				else
				{
					if((board[x1+1][y1-1]->getname()>'A' && board[x1+1][y1 -1]->getname()<'Z') && (x2 == x1+1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1+1][y1-1]->getname()>'a' && board[x1+1][y1-1]->getname()<'z' && (x2 == x1+1) && (y2 == y1-1))
						return false;
				}
			}
		}
	}



	if(x1-1>=0)
	{
		if((board[x1-1][y1] == nullptr) && (x2 == x1-1) && (y2 == y1))
			{
				return true;
			}
			else if((board[x1-1][y1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-1][y1]->getname()>'a' && board[x1-1][y1]->getname()<'z') && (x2 == x1-1) && (y2 == y1))
					{
						return true;
					}
					else if(board[x1-1][y1]->getname()>'A' && board[x1-1][y1]->getname()<'Z' && (x2 == x1-1) && (y2 == y1))
						return false;
				}
				else
				{
					if((board[x1-1][y1]->getname()>'A' && board[x1-1][y1 ]->getname()<'Z') && (x2 == x1-1) && (y2 == y1))
					{
						return true;
					}
					else if(board[x1-1][y1]->getname()>'a' && board[x1-1][y1]->getname()<'z' && (x2 == x1-1) && (y2 == y1))
						return false;
				}
			}	
		
		if(y1+1<8)
		{
			if((board[x1-1][y1+1] == nullptr) && (x2 == x1-1) && (y2 == y1+1))
			{
				return true;
			}
			else if((board[x1-1][y1 +1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-1][y1+1]->getname()>'a' && board[x1-1][y1+1]->getname()<'z') && (x2 == x1-1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1-1][y1+1]->getname()>'A' && board[x1-1][y1+1]->getname()<'Z' && (x2 == x1-1) && (y2 == y1+1))
						return false;
				}
				else
				{
					if((board[x1-1][y1+1]->getname()>'A' && board[x1-1][y1 +1]->getname()<'Z') && (x2 == x1-1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1-1][y1+1]->getname()>'a' && board[x1-1][y1+1]->getname()<'z' && (x2 == x1-1) && (y2 == y1+1))
						return false;
				}
			}	
		}
		if(y1-1>=0)
		{
			if((board[x1-1][y1-1] == nullptr) && (x2 == x1-1) && (y2 == y1-1))
			{
				return true;
			}
			else if((board[x1-1][y1 -1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-1][y1-1]->getname()>'a' && board[x1-1][y1-1]->getname()<'z') && (x2 == x1-1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1-1][y1-1]->getname()>'A' && board[x1-1][y1-1]->getname()<'Z' && (x2 == x1-1) && (y2 == y1-1))
						return false;
				}
				else
				{
					if((board[x1-1][y1-1]->getname()>'A' && board[x1-1][y1 -1]->getname()<'Z') && (x2 == x1-1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1-1][y1-1]->getname()>'a' && board[x1-1][y1-1]->getname()<'z' && (x2 == x1-1) && (y2 == y1-1))
						return false;
				}
			}
		}
	}



	if(y1+1<8)
	{
		if((board[x1][y1+1] == nullptr) && (x2 == x1) && (y2 == y1+1))
			{
				return true;
			}
			else if((board[x1][y1+1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1][y1+1]->getname()>'a' && board[x1][y1+1]->getname()<'z') && (x2 == x1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1][y1+1]->getname()>'A' && board[x1][y1+1]->getname()<'Z' && (x2 == x1) && (y2 == y1+1))
						return false;
				}
				else
				{
					if((board[x1][y1+1]->getname()>'A' && board[x1][y1 +1]->getname()<'Z') && (x2 == x1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1][y1+1]->getname()>'a' && board[x1][y1+1]->getname()<'z' && (x2 == x1) && (y2 == y1+1))
						return false;
				}
			}	
		
		if(x1+1<8)
		{
			if((board[x1+1][y1+1] == nullptr) && (x2 == x1+1) && (y2 == y1+1))
			{
				return true;
			}
			else if((board[x1+1][y1 +1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+1][y1+1]->getname()>'a' && board[x1+1][y1+1]->getname()<'z') && (x2 == x1+1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1+1][y1+1]->getname()>'A' && board[x1+1][y1+1]->getname()<'Z' && (x2 == x1+1) && (y2 == y1+1))
						return false;
				}
				else
				{
					if((board[x1+1][y1+1]->getname()>'A' && board[x1+1][y1 +1]->getname()<'Z') && (x2 == x1+1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1+1][y1+1]->getname()>'a' && board[x1+1][y1+1]->getname()<'z' && (x2 == x1+1) && (y2 == y1+1))
						return false;
				}
			}	
		}
		if(x1-1>=0)
		{
			if((board[x1-1][y1+1] == nullptr) && (x2 == x1-1) && (y2 == y1+1))
			{
				return true;
			}
			else if((board[x1-1][y1 +1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-1][y1+1]->getname()>'a' && board[x1-1][y1+1]->getname()<'z') && (x2 == x1-1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1-1][y1+1]->getname()>'A' && board[x1-1][y1+1]->getname()<'Z' && (x2 == x1-1) && (y2 == y1+1))
						return false;
				}
				else
				{
					if((board[x1-1][y1+1]->getname()>'A' && board[x1-1][y1 +1]->getname()<'Z') && (x2 == x1-1) && (y2 == y1+1))
					{
						return true;
					}
					else if(board[x1-1][y1+1]->getname()>'a' && board[x1-1][y1+1]->getname()<'z' && (x2 == x1-1) && (y2 == y1+1))
						return false;
				}
			}
		}
	}


	if(y1-1>=0)
	{
		if((board[x1][y1-1] == nullptr) && (x2 == x1) && (y2 == y1-1))
			{
				return true;
			}
			else if((board[x1][y1-1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1][y1-1]->getname()>'a' && board[x1][y1-1]->getname()<'z') && (x2 == x1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1][y1-1]->getname()>'A' && board[x1][y1-1]->getname()<'Z' && (x2 == x1) && (y2 == y1-1))
						return false;
				}
				else
				{
					if((board[x1][y1-1]->getname()>'A' && board[x1][y1 -1]->getname()<'Z') && (x2 == x1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1][y1-1]->getname()>'a' && board[x1][y1-1]->getname()<'z' && (x2 == x1) && (y2 == y1-1))
						return false;
				}
			}	
		
		if(x1+1<8)
		{
			if((board[x1+1][y1-1] == nullptr) && (x2 == x1+1) && (y2 == y1-1))
			{
				return true;
			}
			else if((board[x1+1][y1 -1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1+1][y1-1]->getname()>'a' && board[x1+1][y1-1]->getname()<'z') && (x2 == x1+1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1+1][y1-1]->getname()>'A' && board[x1+1][y1-1]->getname()<'Z' && (x2 == x1+1) && (y2 == y1-1))
						return false;
				}
				else
				{
					if((board[x1+1][y1-1]->getname()>'A' && board[x1+1][y1 -1]->getname()<'Z') && (x2 == x1+1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1+1][y1-1]->getname()>'a' && board[x1+1][y1-1]->getname()<'z' && (x2 == x1+1) && (y2 == y1-1))
						return false;
				}
			}	
		}
		if(x1-1>=0)
		{
			if((board[x1-1][y1-1] == nullptr) && (x2 == x1-1) && (y2 == y1-1))
			{
				return true;
			}
			else if((board[x1-1][y1 -1] != nullptr))
			{
				if(board[x1][y1]->getname()>'A' && board[x1][y1]->getname()<'Z')
				{
					if((board[x1-1][y1-1]->getname()>'a' && board[x1-1][y1-1]->getname()<'z') && (x2 == x1-1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1-1][y1-1]->getname()>'A' && board[x1-1][y1-1]->getname()<'Z' && (x2 == x1-1) && (y2 == y1-1))
						return false;
				}
				else
				{
					if((board[x1-1][y1-1]->getname()>'A' && board[x1-1][y1 -1]->getname()<'Z') && (x2 == x1-1) && (y2 == y1-1))
					{
						return true;
					}
					else if(board[x1-1][y1-1]->getname()>'a' && board[x1-1][y1-1]->getname()<'z' && (x2 == x1-1) && (y2 == y1-1))
						return false;
				}
			}
		}
	}
	return false;
}

bool king::move(int x1,int y1,int x2,int y2,keys*** & board)
{
	if(board[x2][y2] == nullptr)
	{
		board[x2][y2] = board[x1][y1];
		board[x1][y1] = nullptr;
		board[x2][y2]->set_x(x2);
		board[x2][y2]->set_y(y2);
	}
	else if((board[x2][y2] != nullptr) && (board[x2][y2]->getname()!='K') && (board[x2][y2]->getname()!='k'))
	{
		delete board[x2][y2];
		board [x2][y2] = board[x1][y1];
		board[x1][y1] = nullptr;
		board[x2][y2]->set_x(x2);
		board[x2][y2]->set_y(y2);
	}
	else
	{
		cout<<"\nCannot kill THE KING !!\n";
		return false;
	}
	return true;
}

bool king::check_king(int x1,int y1,keys *** & board)
{

 	if(board[x1][y1]->getname()=='K')
	{
		for(int i=x1+1;i<8 ; i++)
		{
			if((board[i][y1]!=nullptr))
			{
				if( board[i][y1]->getname()=='r' || board[i][y1]->getname()=='q')
					return false;
			
				else if( board[i][y1]->getname()!='r' || board[i][y1]->getname()!='q')
				{
					break;
				}
			}
		}

		for(int i=x1-1;i>=0 ; i--)
		{
			if((board[i][y1]!=nullptr))
			{
				if( board[i][y1]->getname()=='r' || board[i][y1]->getname()=='q')
					return false;
				else if( board[i][y1]->getname()!='r' || board[i][y1]->getname()!='q')
				{
					break;
				}
			}
		}

		for(int i=y1+1;i<8 ; i++)
		{
			if((board[i][y1]!=nullptr))
			{
				if((board[x1][i]->getname()=='r' || board[x1][i]->getname()=='q'))
					return false;
				else if( board[x1][i]->getname()!='r' || board[x1][i]->getname()!='q')
				{
					break;
				}
			}
		}

		for(int i=y1-1;i>=0 ; i--)
		{
			if((board[x1][i]!=nullptr))
			{
				if( board[x1][i]->getname()=='r' || board[x1][i]->getname()=='q')
					return false;
				else if( board[x1][i]->getname()!='r' || board[x1][i]->getname()!='q')
				{
					break;
				}
			}
		}

		if((board[x1+1][y1+1]!=nullptr) )
		{
			if( board[x1+1][y1+1]->getname()=='p')
				return false;
		}
		if((board[x1+1][y1-1]!=nullptr) )
		{
			if( board[x1+1][y1-1]->getname()=='p')
			return false;
		}
		int j=y1+1;
		for(int i=x1+1;i<8 && j<8 ; i++)
		{
			if((board[i][j]!=nullptr) )
			{
				if( board[i][j]->getname()=='b' || board[i][j]->getname()=='q')
					return false;
				else if(board[i][j]->getname()!='b' || board[i][j]->getname()!='q')
				{
					break;
				}
				
			}
			j++;
		}

		j=y1+1;
		for(int i=x1-1;i>=0 && j<8 ; i--)
		{
			if((board[i][j]!=nullptr) )
			{
				if( board[i][j]->getname()=='b' || board[i][j]->getname()=='q')
					return false;
				else if( board[i][j]->getname()!='b' || board[i][j]->getname()!='q')
				{
					break;
				}
				
			}
			j++;
		}

		j=y1-1;
		for(int i=x1+1;i<8 && j>=0 ; i++)
		{
			if((board[i][j]!=nullptr) )
			{
				if( (board[i][j]->getname()=='b' || board[i][j]->getname()=='q'))
					return false;
				else if( board[i][j]->getname()!='b' || board[i][j]->getname()!='q')
				{
					break;
				}
				
			}
			j--;
		}

		j=y1-1;
		for(int i=x1-1;i>=0 && j>=0 ; i--)
		{
			if((board[i][j]!=nullptr) )
			{
				if( board[i][j]->getname()=='b' || board[i][j]->getname()=='q')
					return false;
				else if( board[i][j]->getname()!='b' || board[i][j]->getname()!='q')
				{
					break;
				}
				
			}
			j--;
		}

		if(x1+2<8)
		{
			if(y1+1<8)
			{
				if((board[x1+2][y1+1]!=nullptr) )
				{
					if( (board[x1+2][y1+1]->getname()=='n'))
					{
						return false;
					}
				}
			}
		}

		if(x1+2<8)
		{
			if(y1-1>=0)
			{
				if((board[x1+2][y1-1]!=nullptr))
				{
					if((board[x1+2][y1-1]->getname()=='n'))
					{
						return false;
					}
				}
			}
		}

		if(x1-2>=0)
		{
			if(y1+1<8)
			{
				if((board[x1-2][y1+1]!=nullptr))
				{
					if((board[x1-2][y1+1]->getname()=='n'))
					{
						return false;
					}
				}
			}
		}

		if(x1-2>=0)
		{
			if(y1-1>=0)
			{
				if((board[x1+2][y1+1]!=nullptr))
				{
					if((board[x1+2][y1+1]->getname()=='n'))
					{
						return false;
					}
				}
			}
		}

		if(y1+2<8)
		{
			if(x1+1<8)
			{
				if((board[x1+2][y1+1]!=nullptr))
				{
					if( (board[x1+2][y1+1]->getname()=='n'))
					{
						return false;
					}
				}
			}
		}

		if(y1+2<8)
		{
			if(x1-1>=0)
			{
				if((board[x1-1][y1+2]!=nullptr))
				{
					if( (board[x1-1][y1+2]->getname()=='n'))
					{
						return false;
					}
				}
			}
		}

		if(y1-2>=0)
		{
			if(x1+1<8)
			{
				if((board[x1+1][y1-2]!=nullptr))
				{
					if((board[x1+1][y1-2]->getname()=='n'))
					{
						return false;
					}
				}
			}
		}

		if(y1-2>=0)
		{
			if(x1-1>=0)
			{
				if((board[x1+2][y1+1]!=nullptr))
				{
					if( (board[x1+2][y1+1]->getname()=='n'))
					{
						return false;
					}
				}
			}
		}
		return true;
	}
	else
	{
		for(int i=x1+1;i<8 ; i++)
		{
			if((board[i][y1]!=nullptr) )
			{
				if( board[i][y1]->getname()=='R' || board[i][y1]->getname()=='Q')
					return false;
				else if( board[i][y1]->getname()!='R' || board[i][y1]->getname()!='Q')
				{
					break;
				}
			}
		}

		for(int i=x1-1;i>=0 ; i--)
		{
			if((board[i][y1]!=nullptr) )
			{
				if( board[i][y1]->getname()=='R' || board[i][y1]->getname()=='Q')
					return false;
				else if( board[i][y1]->getname()!='R' || board[i][y1]->getname()!='Q')
				{
					break;
				}
			}
		}

		for(int i=y1+1;i<8 ; i++)
		{
			if((board[x1][i]!=nullptr) )
			{
				if( board[x1][i]->getname()=='R' || board[x1][i]->getname()=='Q')
					return false;
				else if( board[x1][i]->getname()!='R' || board[x1][i]->getname()!='Q')
				{
					break;
				}
			}
		}

		for(int i=y1-1;i>=0 ; i--)
		{
			if((board[x1][i]!=nullptr))
			{
				if( board[x1][i]->getname()=='R' || board[x1][i]->getname()=='Q')
					return false;
				else if( board[x1][i]->getname()!='R' || board[x1][i]->getname()!='Q')
				{
					break;
				}
			}
		}
		if((board[x1-1][y1+1]!=nullptr) )
		{
			if( board[x1-1][y1+1]->getname()=='P')
				return false;
		}
		if((board[x1-1][y1-1]!=nullptr))
		{
			if( board[x1-1][y1-1]->getname()=='P')
				return false;
		}
		int j=y1+1;
		for(int i=x1+1;i<8 && j<8 ; i++)
		{
			if((board[i][j]!=nullptr) )
			{
				if( board[i][j]->getname()=='B' || board[i][j]->getname()=='Q')
					return false;
				else if( board[i][j]->getname()!='B' || board[i][j]->getname()!='Q')
				{
					break;
				}
			}
			j++;
		}

		j=y1+1;
		for(int i=x1-1;i>=0 && j<8 ; i--)
		{
			if((board[i][j]!=nullptr))
			{
				if( board[i][j]->getname()=='B' || board[i][j]->getname()=='Q')
					return false;
				else if( board[i][j]->getname()!='B' || board[i][j]->getname()!='Q')
				{
					break;
				}
			}
			j++;
		}

		j=y1-1;
		for(int i=x1+1;i<8 && j>=0 ; i++)
		{
			if((board[i][j]!=nullptr))
			{
				if( board[i][j]->getname()=='B' || board[i][j]->getname()=='Q')
					return false;
				else if( board[i][j]->getname()!='B' || board[i][j]->getname()!='Q')
				{
					break;
				}
			}
			j--;
		}

		j=y1-1;
		for(int i=x1-1;i>=0 && j>=0 ; i--)
		{
			if((board[i][j]!=nullptr) )
			{
				if( board[i][j]->getname()=='B' || board[i][j]->getname()=='Q')
					return false;
				else if(board[i][j]->getname()!='B' || board[i][j]->getname()!='Q')
				{
					break;
				}
			}
			j--;
		}

		if(x1+2<8)
		{
			if(y1+1<8)
			{
				if((board[x1+2][y1+1] != nullptr))
				{
					if( (board[x1+2][y1+1]->getname()=='N'))
					{
						return false;
					}
				}
			}
		}

		if(x1+2<8)
		{
			if(y1-1>=0)
			{
				if((board[x1+2][y1-1] != nullptr))
				{
					if( (board[x1+2][y1-1]->getname()=='N'))
					{
						return false;
					}
				}
			}
		}

		if(x1-2>=0)
		{
			if(y1+1<8)
			{
				if((board[x1-2][y1+1] != nullptr))
				{
					if( (board[x1-2][y1+1]->getname()=='N'))
					{
						return false;
					}
				}
			}
		}

		if(x1-2>=0)
		{
			if(y1-1>=0)
			{
				if((board[x1-2][y1-1] != nullptr))
				{
					if( (board[x1-2][y1-1]->getname()=='N'))
					{
						return false;
					}
				}
			}
		}

		if(y1+2<8)
		{
			if(x1+1<8)
			{
				if((board[x1+1][y1+2] != nullptr))
				{
					if( (board[x1+1][y1+2]->getname()=='N'))
					{
						return false;
					}
				}
			}
		}

		if(y1+2<8)
		{
			if(x1-1>=0)
			{
				if((board[x1-1][y1+2] != nullptr))
				{
					if( (board[x1-1][y1+2]->getname()=='N'))
					{
						return false;
					}
				}
			}
		}

		if(y1-2>=0)
		{
			if(x1+1<8)
			{
				if((board[x1+1][y1-2] != nullptr))
				{
					if( (board[x1+1][y1-2]->getname()=='N'))
					{
						return false;
					}
				}
			}
		}

		if(y1-2>=0)
		{
			if(x1-1>=0)
			{   
				if((board[x1-1][y1-2] != nullptr))
				{
					if( (board[x1-1][y1-2]->getname()=='N'))
					{
						return false;
					}
				}
			}
		}
		return true;
	}
}