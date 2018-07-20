//Name : Muhammad Ibrahim
//Roll No : 13i-1821

#include "Board.h"
/*____________________Contructor______________________________________________*/
Board::Board()
{

	movement = 1;
}
//                       POLYMORPHISM Used to draw different ghosts

/*______________________________DRAWS__BOARD____________________________________*/

void Board::DrawBoard(int BOARD_X, int BOARD_Y)
{

	pacman.DrawMaze(BOARD_X, BOARD_Y);

	pacman.Draw();

	Red r;
	Orange o;
	Aqua a;
	Purple pu;
	Pacman *p[4];
	p[0] = new Pacman;
	p[1] = new Pacman;
	p[2] = new Pacman;
	p[3] = new Pacman;
	p[0] = &r;
	p[1] = &pu;
	p[2] = &o;
	p[3] = &a;

	for (int i = 0; i < 4; i++)
	{
		p[i]->Draw();
	}
}
/*_______________Returns___pacman's___score_____________________________________________*/

int Board::Score()
{

	return pacman.Score();
}
/*______uses____left_____right_____up____down_____function_____according___of________movement_____set_____*/

void Board::move(int x)
{

	switch (x)
	{

	case 1:

		pacman.right();
		break;

	case 2:

		pacman.up();

		break;

	case 3:

		pacman.left();

		break;

	case 4:

		pacman.down();

		break;
	default:
		break;
	};
}
/*___it___returns__movement____that____decides____whether_____to___move___up__down____left___or_____right________*/

int Board::UDLR()
{

	return movement;
}
/*_________move__left____function_____________________________________________________*/

void Board::moveleft()
{

	int l = pacman.a, m = pacman.b;

	pacman.getpos(m, l);

	if (pacman.arr[m][l - 1] == NILL || pacman.arr[m][l - 1] == FRUIT || pacman.arr[m][l - 1] == PEBB)
	{

		pacman.movement = movement = 3;
	}
}
/*_________move__right__function_______________________________________________________*/

void Board::moveright()
{

	int l = pacman.a, m = pacman.b;

	pacman.getpos(m, l);

	if (pacman.arr[m][l + 1] == NILL || pacman.arr[m][l + 1] == FRUIT || pacman.arr[m][l + 1] == PEBB)
	{

		pacman.movement = movement = 1;
	}
}
/*_______move__up___function______________________________________________________*/

void Board::moveup()
{

	int l = pacman.a, m = pacman.b;

	pacman.getpos(m, l);

	if (pacman.arr[m - 1][l] == NILL || pacman.arr[m - 1][l] == FRUIT || pacman.arr[m - 1][l] == PEBB)
	{

		pacman.movement = movement = 2;
	}
}
/*_______move__down__function_______________________________________________________*/

void Board::movedown()
{

	int l = pacman.a, m = pacman.b;

	pacman.getpos(m, l);

	if (pacman.arr[m + 1][l] == NILL || pacman.arr[m + 1][l] == FRUIT || pacman.arr[m + 1][l] == PEBB)
	{

		pacman.movement = movement = 4;
	}
}
/*__________________________________________________________________*/
