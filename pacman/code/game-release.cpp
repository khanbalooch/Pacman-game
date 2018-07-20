//============================================================================
// Author      : Muhammad Ibrahim
// Roll No     : 13i-1821
// Name        : PAC-MAN.cpp
// Version     : latest
// Copyright   : (c) Reserved
// Description : Basic 2D game of PAC-MAN...
//============================================================================

#ifndef PACMAN_CPP_
#define PACMAN_CPP_
#include "Board.h"
#include "util.h"
#include "pacman.h"
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

Board *B; //Pointer for class Board to call only function
/*______________________________________________________________________________________________________*/
void SetCanvasSize(int width, int height)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
/*__________function___Template__to__convert_an_integter___into___string___________________________________*/

template <typename t>
string Score(t Number)
{
	ostringstream ss;
	ss << Number;
	return ss.str();
}

/*_______________________Display_____function__________________________________________________________________________*/
void Display()
{

	glClearColor(0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	B->DrawBoard(28, 28);
	//DrawParts();
	int x = 400;

	cout << " midx= " << x;
	DrawString(x - 270, 680, "Your Scores :", colors[5]);
	DrawString(x - 70, 680, Score(B->Score()), colors[5]);
	DrawString(x - 300, 640, "MUHAMMAD IBRAHIM BALOCH", colors[5]);
	glutSwapBuffers(); // do not modify this line..
}

/*___________________Control_keys__________________________________________________________________________________*/
void NonPrintableKeys(int key, int x, int y)
{

	if (key == GLUT_KEY_LEFT)
	{

		B->moveleft();
	}
	else if (key == GLUT_KEY_RIGHT)
	{

		B->moveright();
	}
	else if (key == GLUT_KEY_UP)
	{

		B->moveup();
	}
	else if (key == GLUT_KEY_DOWN)
	{

		B->movedown();
	}

	glutPostRedisplay();
}

/*______________________________________________________________________________*/
void PrintableKeys(unsigned char key, int x, int y)
{
	if (key == KEY_ESC)
	{

		exit(1);
	}
}

/*______________________________timer__function_________________________________*/
void Timer(int m)
{
	B->move(B->UDLR());
	if (B->Score() == 216)
	{
		exit(1);
	}

	glutTimerFunc(159999 / FPS, Timer, 0);
	glutPostRedisplay();
}

/*___________________________________our___main____driver____________________________________________________________*/
int main(int argc, char *argv[])
{
	B = new Board;
	int width = 570, height = 750;
	InitRandomizer();
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(width, height);
	glutCreateWindow("MUHAMMAD IBRAHIM BALOCH");
	SetCanvasSize(width, height);

	//glutDisplayFunc(display);
	glutDisplayFunc(Display);
	glutSpecialFunc(NonPrintableKeys);
	glutKeyboardFunc(PrintableKeys);

	glutTimerFunc(1000 / FPS, Timer, 0);

	glutMainLoop();
	return 1;
}
#endif /* PACMAN_CPP_ */
