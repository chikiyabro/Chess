# ifndef HEADER_H
# define HEADER_H
class keys
{
	char name;
	int x;
	int y;
public:
	keys();
	char getname();
	void setname(char);
	void set_x(int);
	int get_x();
	void set_y(int);
	int get_y();
	virtual bool check_king(int,int,keys *** &);
	virtual bool valid_move(int,int,int,int,keys *** &);
	virtual bool move(int,int,int,int,keys *** &);
		//virtual void delete_keys();
};

class rooke:public keys
{
public:
	rooke(char,int,int);
	//~rooke();
	bool valid_move(int,int,int,int,keys***&);
	bool move(int,int,int,int,keys***&);
	//void delete_keys();
};

class bishop:public keys
{
public:
	bishop(char,int,int);
	//~bishop();
	bool valid_move(int,int,int,int,keys*** &);
	bool move(int,int,int,int,keys ***&);
	//void delete_keys();
};

class knight:public keys
{
public:
	knight(char,int,int);
	//~knight();
	bool valid_move(int,int,int,int,keys*** &);
	bool move(int,int,int,int,keys*** &);
	//void delete_keys();
};

class king:public keys
{
public:
	king(char,int,int);
	//~king();
	bool check_king(int,int,keys *** &);
	bool valid_move(int,int,int,int,keys*** &);
	bool move(int,int,int,int,keys*** &);
	//void delete_keys();
};

class pawn:public keys
{
	bool move_2;
public:
	pawn(char,int,int);
	
	bool valid_move(int,int,int,int,keys *** &);
	bool move(int,int,int,int,keys *** &);
	//void delete_keys();
};
class queen:public keys
{
	public:
	queen(char,int,int);
	//~queen();
	bool valid_move(int,int,int,int,keys ***&);
	bool move(int,int,int,int,keys ***&);
	//void delete_keys();
};

class chess
{
	keys *** board ;
	char *abc;
	bool turn;
public:
	chess();
	//~chess();
	bool playgame();
	void printing(keys *** &);
	void play_game();
};
# endif