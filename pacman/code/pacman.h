//Name : Muhammad Ibrahim
//Roll No : 13i-1821

#ifndef Ibrahim
#define Ibrahim
#include "util.h"
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

/*__________________ENUMERATION____of__board___parts_____________*/

enum BoardParts
{
	FRUIT,
	NILL,
	TLC,
	TRC,
	BLC,
	BRC,
	HL,
	VL,
	PEBB,

};
/*__________________________________________________________________*/
/*___PACMAN_________class______________________________________________________*/
/*__________________________________________________________________*/

class Pacman
{
  protected:
	int color;

  private:
	int score;

  public:
	int a, b, movement;
	static int arr[28][28];

	Pacman();
	void DrawMaze(int BOARD_X, int BOARD_Y);
	void getpos(int &l, int &m);
	void left();
	void right();
	void up();
	void down();
	int Score();
	virtual void Draw();
};
/*__________________________________________________________________*/

/*_______________________red_____ghost_____inherited_____from___pacman_________________________*/

class Red : public Pacman
{

	int c, d;

  public:
	Red();
	void down();
	void Draw();
};
/*____________________Purple__ghost__________________________________________*/
class Purple : public Pacman
{

	int c, d;

  public:
	Purple();
	void Draw();
};
/*_________________Orange___ghost____________________________________________*/
class Orange : public Pacman
{

	int c, d;

  public:
	Orange();
	void Draw();
};
/*_____________Aqu_______ghost____________________________________________*/
class Aqua : public Pacman
{

	int c, d;

  public:
	Aqua();
	void Draw();
};
/*________________________________________________________________*/
#endif
