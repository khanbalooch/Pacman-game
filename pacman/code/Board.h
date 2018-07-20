//Name : Muhammad Ibrahim
//Roll No : 13i-1821



//             DESCRIPTION  OF CLASS "BOARD"


//this class includes board class that is compsited from pacman
//class its move funtions use the pacman's class control functions


#ifndef Ibrahim_g
#define Ibrahim_g

#include<iostream>
#include"pacman.h"
#include<string>
#include<cmath>
using namespace std;

class Board{

private:

	Pacman pacman;
	int movement;//decides moving direction

public:
  
  Board();
  int UDLR();
  int Score();
  void moveup();
  void moveleft();
  void movedown();
  void move(int x);	
  void moveright();
  void DrawBoard(int BOARD_X,int BOARD_Y);
};
#endif
