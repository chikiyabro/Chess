#include "Header.h"
#include <iostream>

using namespace std;

 void big_king_cord(int &x1,int &y1,keys*** & board)
 {
	 bool c = false;
	 for(int i=0;i<8;i++)
	 {
		 for(int j=0;j<8;j++)
		 {
			 if( (board[i][j]!=nullptr) && (board[i][j]->getname() == 'K'))
			 {
				 c=true;
				 x1=i;
				 y1=j;
			 }
			 if(c==true)
				 break;
		 }
		 if(c==true)
			break;
	 }
 }
 void small_king_cord(int &x1,int &y1,keys*** & board)
 {	 
	 bool c = false;
	 for(int i=0;i<8;i++)
	 {
		 for(int j=0;j<8;j++)
		 {
			 if( (board[i][j]!=nullptr) && (board[i][j]->getname() == 'k'))
			 {
				 c=true;
				 x1=i;
				 y1=j;
			 }
			 if(c==true)
				 break;
		 }
		 if(c==true)
			break;
	 }
 }
chess::chess()
{
	turn = true;
	board = new keys **[8];
	for(int i=0;i<8;i++)
	{
		board[i] = new keys *[8];
	}
	rooke *r1=new rooke('R',0,0);
	board[0][0] = r1;
	rooke *r2=new rooke('R',0,7);
	board[0][7] = r2;
	knight *n1=new knight('N',0,1);
	board[0][1] = n1;
	knight *n2=new knight('N',0,6);
	board[0][6] = n2;
	bishop *b1=new bishop('B',0,2);
	board[0][2] = b1;
	bishop *b2=new bishop('B',0,5);
	board[0][5] = b2;
	queen *q1 = new queen('Q',0,3);
	board[0][3] = q1;
	king *k1 = new king('K',0,4);
	board[0][4] = k1;
	pawn *p1 = new pawn('P',1,0);
	board[1][0] = p1;
	pawn *p2 = new pawn('P',1,1);
	board[1][1] = p2;
	pawn *p3 = new pawn('P',1,2);
	board[1][2] = p3;
	pawn *p4 = new pawn('P',1,3);
	board[1][3] = p4;
	pawn *p5 = new pawn('P',1,4);
	board[1][4] = p5;
	pawn *p6 = new pawn('P',1,5);
	board[1][5] = p6;
	pawn *p7 = new pawn('P',1,6);
	board[1][6] = p7;
	pawn *p8 = new pawn('P',1,7);
	board[1][7] = p8;
	

	rooke *r3=new rooke('r',7,0);
	board[7][0] = r3;
	rooke *r4=new rooke('r',7,7);
	board[7][7] = r4;
	knight *n3=new knight('n',7,1);
	board[7][1] = n3;
	knight *n4=new knight('n',7,6);
	board[7][6] = n4;
	bishop *b3=new bishop('b',7,2);
	board[7][2] = b3;
	bishop *b4=new bishop('b',7,5);
	board[7][5] = b4;
	queen *q2 = new queen('q',7,4);
	board[7][4] = q2;
	king *k2 = new king('k',7,3);
	board[7][3] = k2;
	pawn *p9 = new pawn('p',6,0);
	board[6][0] = p9;
	pawn *p10 = new pawn('p',6,1);
	board[6][1] = p10;
	pawn *p13 = new pawn('p',6,2);
	board[6][2] = p13;
	pawn *p14 = new pawn('p',6,3);
	board[6][3] = p14;
	pawn *p15 = new pawn('p',6,4);
	board[6][4] = p15;
	pawn *p16 = new pawn('p',6,5);
	board[6][5] = p16;
	pawn *p17 = new pawn('p',6,6);
	board[6][6] = p17;
	pawn *p18 = new pawn('p',6,7);
	board[6][7] = p18;
	
	for(int i=2;i<6;i++)
	{
		for(int j=0;j<8;j++)
		{
			board[i][j] = nullptr;
		}
	}
	abc="abcdefgh";
	cout<<"\n\n                          =========  CHESS  =========  \n\n\n";
	cout<<"  At Any point press 'q' to quit game !!\n\n\n";
	cout<<"  ---> Big's turn <---\n\n";
	cout<<"   1  2  3  4  5  6  7  8\n\n";
	for(int i=0;i<8;i++)
	{
		cout<<abc[i]<<"  ";
		for(int  j=0;j<8;j++)
		{
			if(board[i][j] == nullptr)
				cout<<"-  ";
			else
			cout<<board[i][j]->getname()<<"  ";
		}
		cout<<endl;
	}
}
 bool chess::playgame()
 {
	 int x11,y11;
	 if((turn == true))
	 {
		 big_king_cord(x11,y11,board);
		 if(!board[x11][y11]->check_king(x11,y11,board))
		 {
			cout<<"\nCHECK to Big Player !!\n";
			
		 }
	 }
	 else
	 {
		 small_king_cord(x11,y11,board);
		 if(!board[x11][y11]->check_king(x11,y11,board))
		 {
			cout<<"\nCHECK to Small Player !!\n";
			
		 }
	}
	 int x1,x2,y1,y2;
	 char a[7];
	 cout<<"\n\nMove From : ";
	 cin>>a;
	 if(a[0]=='q')
	 {
		 return true;
	 }
	 while(a[0]<'a' || a[0]>'h' || a[1]<'1' || a[1]>'8')
	 {
		 cout<<"\nWrong Input !!";
		 return false;
	
	 }
	  a[0] = a[0] - 49 ;
	 int temp = atoi(a);
	 y1 = temp % 10 - 1;
	 x1 = temp / 10;
	 while (board[x1][y1]== nullptr)
	{
		 cout<<"\nPLEASE SELECT A KEY TO MOVE !!";
		 return false;
	}
	 
	 
	 if(turn == true)
	 {
		 while (board[x1][y1]->getname()<'A' || board[x1][y1]->getname()>'Z')
		 {
			 cout<<"\nIts the TURN of the other Player !!";
			return false;
		 }
		 turn = false;
	 }
	 else if(turn == false)
	 {
		 while (board[x1][y1]->getname()<'a' || board[x1][y1]->getname()>'z')
		 {
			 cout<<"\nIts the TURN of the other Player !!";
			return false;
		 }
		 turn = true;
	 }
	 

	 cout<<"\nMove To : ";
	 cin>>a;
	 if(a[0]=='q')
	 {
		 return true;
	 }
	 while(a[0]<'a' || a[0]>'h' || a[1]<'1' || a[1]>'8')
	 {
		 cout<<"\nWrong Input !!";
		return false;
	 }
	 a[0] = a[0] - 49 ;
	 temp = atoi(a);
	 y2 = temp % 10 - 1;
	 x2 = temp / 10;
	 if(board[x1][y1]->valid_move(x1,y1,x2,y2,board))
	 {
		 if(!board[x1][y1]->move(x1,y1,x2,y2,board))
			 turn = !turn;
		 else
		 {
			 
			 if(!(turn == true))
			 {
				 big_king_cord(x11,y11,board);
				 if(!board[x11][y11]->check_king(x11,y11,board))
				 {
					 board[x2][y2]->move(x2,y2,x1,y1,board);
					cout<<"\nCHECK to Big Player !!\n";
					turn = !turn;
				 }
			 }
			 else
			 {
				 small_king_cord(x11,y11,board);
				 if(!board[x11][y11]->check_king(x11,y11,board))
				 {
					board[x2][y2]->move(x2,y2,x1,y1,board);
					cout<<"\nCHECK to Small Player !!\n";
					turn = !turn;
				 }
			}
		 }
		 printing(board);
		 return false;
	 }
	 else
	 {
		 cout<<"\nInvalid Move !!";
		turn = !turn;
		 printing(board);
		 return false;
	 }
 }

 void chess::printing(keys *** & board)
 {
	 cout<<"\n";
	 if(turn == true)
		 cout<<"  ---> Big's turn <---\n\n";
	 else
		 cout<<"  ---> small's turn <---\n\n";
	 cout<<"   1  2  3  4  5  6  7  8\n\n";
	for(int i=0;i<8;i++)
	{
		cout<<abc[i]<<"  ";
		for(int  j=0;j<8;j++)
		{
			if(board[i][j] == nullptr)
				cout<<"-  ";
			else
			cout<<board[i][j]->getname()<<"  ";
		}
		cout<<endl;
	}
 }