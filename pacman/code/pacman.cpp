//Name : Muhammad Ibrahim
//Roll No : 13i-1821
#include "pacman.h"
#include "util.h"

int Pacman::arr[28][28] = {
	{BRC, HL, HL, HL, HL, BLC, NILL, BRC, HL, HL, HL, HL, HL, HL, HL, HL, HL, HL, HL, HL, BLC, NILL, BRC, HL, HL, HL, HL, BLC},
	{VL, BRC, HL, HL, HL, TLC, NILL, TRC, HL, HL, HL, HL, HL, BLC, BRC, HL, HL, HL, HL, HL, TLC, NILL, TRC, HL, HL, HL, BLC, VL},
	{

		TRC, TLC, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, VL, PEBB, PEBB, PEBB,
		PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, TRC, TLC},
	{NILL, PEBB, PEBB, BRC, HL, HL, HL, HL, HL, HL, HL, BLC, PEBB, VL, VL, PEBB, BRC, HL, HL, HL, HL, HL, HL, HL, BLC, PEBB, PEBB, NILL

	},
	{BRC, BLC, PEBB, VL, PEBB, PEBB, PEBB, PEBB, FRUIT, PEBB, PEBB, VL, PEBB, TRC, TLC, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, BRC, BLC

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, PEBB, PEBB, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, BRC, BLC, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, BRC, HL, HL, HL, TLC, PEBB, TRC, TLC, PEBB, TRC, HL,
	 HL, HL, BLC, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, FRUIT,
	 PEBB, PEBB, VL, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, TRC, HL, HL, HL, TLC, PEBB, BRC, HL, HL, HL, NILL, NILL, HL, HL, HL, BLC, PEBB, TRC, HL, HL, HL, TLC, PEBB, VL, VL},

	{VL, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, NILL, NILL, NILL, NILL, NILL, NILL, NILL, NILL,
	 VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, VL},
	{
		VL, TRC, HL, BLC, PEBB, BRC, HL, BLC, PEBB, VL, NILL, NILL, NILL, NILL, NILL, NILL, NILL, NILL,
		VL, PEBB, BRC, HL, BLC, PEBB, BRC, HL, TLC, VL
		/*______________________________________________________________________________________________*/
	},
	{VL, BRC, HL, TLC, PEBB, TRC, HL, TLC, PEBB, VL, NILL, NILL, NILL, NILL, NILL, NILL, NILL, NILL,
	 VL, PEBB, TRC, HL, TLC, PEBB, TRC, HL, BLC, VL

	},
	{VL, VL, PEBB, PEBB, PEBB, FRUIT, PEBB, PEBB, PEBB, VL, NILL, NILL, NILL, NILL, NILL, NILL, NILL, NILL,
	 VL, PEBB, PEBB, PEBB, FRUIT, PEBB, PEBB, PEBB, VL, VL

	},
	{VL, VL, PEBB, BRC, HL, HL, HL, BLC, PEBB, TRC, HL, HL, HL, HL, HL, HL, HL, HL, TLC, PEBB, BRC, HL, HL, HL, BLC, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB,
	 PEBB, PEBB, VL, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, TRC, HL, HL, HL, BLC, PEBB, BRC, BLC, PEBB, BRC, HL, HL, HL, TLC, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, TRC, TLC, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{VL, VL, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, FRUIT, VL, PEBB, PEBB, PEBB, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, VL, VL

	},
	{TRC, TLC, PEBB, VL, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, BRC, BLC, PEBB, VL, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, PEBB, TRC, TLC

	},
	{NILL, PEBB, PEBB, TRC, HL, HL, HL, HL, HL, HL, HL, TLC, PEBB, VL, VL, PEBB, TRC, HL, HL, HL, HL, HL, HL, HL, TLC, PEBB, PEBB, NILL},
	{BRC, BLC, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, VL, VL, PEBB, PEBB, PEBB,
	 PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, PEBB, FRUIT, BRC, BLC

	},

	{VL, TRC, HL, HL, HL, BLC, NILL, BRC, HL, HL, HL, HL, HL, TLC, TRC, HL, HL, HL, HL, HL, BLC, NILL, BRC, HL, HL, HL, TLC, VL},
	{TRC, HL, HL, HL, HL, TLC, NILL, TRC, HL, HL, HL, HL, HL, HL, HL, HL, HL, HL, HL, HL, TLC, NILL, TRC, HL, HL, HL, HL, TLC}};

/*__________________________________________________________________*/
Pacman::Pacman()
{

	srand(time(NULL));
	movement = 1;
	score = 0;
	a = 60;
	b = 60;

	color = 5;
}

/*___________________________________________________________________*/
void Pacman::getpos(int &l, int &m)
{

	if (l % 20 == 0 && m % 20 == 0)
	{
		l = 28 - (l / 20);
		m = m / 20 - 1;
	}

	else if (l % 20 == 0 && m % 20 != 0)
	{
		l = 27 - (l / 20);
		int a = 20 - (m % 20);
		m = 27 - ((m + a) % 20);
	}

	else if (l % 20 != 0 && m % 20 == 0)
	{
		m = 27 - (m / 20);
		int a = 20 - (l % 20);
		l = 27 - ((l + a) % 20);
	}

	else if (l % 20 != 0 && m % 20 != 0)
	{
		int a = 20 - (m % 20);
		m = 27 - ((m + a) % 20);
		a = 20 - (l % 20);
		l = 27 - ((l + a) % 20);
	}
}
/*___________________________________________________________________*/
void Pacman::up()
{
	int l = a;
	int m = b;
	getpos(m, l);

	switch (arr[m - 1][l])
	{

	case PEBB:
		score += 1;
		arr[m - 1][l] = NILL;
		break;
	case FRUIT:
		score += 10;
		arr[m - 1][l] = NILL;
		break;
	default:
		break;
	};
	if (a == 140 && b == 560)
	{
		a = 140;
		b = 20;
	}
	if (a == 440 && b == 560)
	{
		a = 440;
		b = 20;
	}
	if (arr[m - 1][l] == NILL || arr[m - 1][l] == PEBB || arr[m - 1][l] == FRUIT)
	{

		b += 20;
	}
}
/*___________________________________________________________________*/

void Pacman::left()
{

	int l = a;
	int m = b;
	getpos(m, l);

	switch (arr[m][l - 1])
	{

	case PEBB:
		score += 1;
		arr[m][l - 1] = NILL;
		break;

	case FRUIT:
		score += 10;
		arr[m][l - 1] = NILL;
		break;
	default:
		break;
	};

	if (a == 20 && b == 500)
	{
		a = 560;
		b = 500;
	}
	if (a == 20 && b == 80)
	{
		a = 560;
		b = 80;
	}

	if (arr[m][l - 1] == PEBB || arr[m][l - 1] == NILL || arr[m][l - 1] == FRUIT)
	{
		a -= 20;
	}
}
//___________________________________________________________________

void Pacman::right()
{
	int l = a;
	int m = b;
	getpos(m, l);

	switch (arr[m][l + 1])
	{
		cout << "called\n";
	case PEBB:
		arr[m][l + 1] = NILL;
		score += 1;
		break;
	case FRUIT:
		arr[m][l + 1] = NILL;
		score += 10;
		break;
	default:
		break;
	};
	if (a == 560 && b == 80)
	{
		a = 20;
		b = 80;
	}
	if (a == 560 && b == 500)
	{
		a = 20;
		b = 500;
	}

	if (arr[m][l + 1] == NILL || arr[m][l + 1] == PEBB || arr[m][l + 1] == FRUIT)
	{

		a = a + 20;
	}
}

//___________________________________________________________________

//___________________________________________________________________
void Pacman::down()
{
	int l = a;
	int m = b;
	getpos(m, l);

	switch (arr[m + 1][l])
	{
	case PEBB:
		arr[m + 1][l] = NILL;
		score += 1;
		break;
	case FRUIT:
		arr[m + 1][l] = NILL;
		score += 10;
		break;
	default:
		break;
	};
	if (a == 140 && b == 20)
	{
		a = 140;
		b = 560;
	}
	if (a == 440 && b == 20)
	{
		a = 440;
		b = 560;
	}

	if (arr[m + 1][l] == NILL || arr[m + 1][l] == PEBB || arr[m + 1][l] == FRUIT)
	{

		b = b - 20;
	}
}
/*___________________________________________________________________*/
int Pacman::Score()
{
	return score;
}
/*_____________________________________________________________________*/
void Pacman ::DrawMaze(int BOARD_X, int BOARD_Y)
{

	int lwidth = 3;
	int cwidth = 3;

	int xcellsize = 20;
	int ycellsize = 20;

	ColorNames pcolor = PINK;
	ColorNames bcolor = DARK_BLUE;
	ColorNames rcolor = RED;

	for (int i = BOARD_Y - 1, y = 0; i >= 0; --i, y += xcellsize)
	{
		for (int j = 0, x = 0; j < BOARD_X; j++, x += ycellsize)
		{
			switch (arr[i][j])
			{
			case NILL: //resets the pebble array
					   // Prohibitive Empty space
				break;
			case TLC: //	Left corner top
				Torus2d(x, y + xcellsize, 270, 90,
						(float)xcellsize / 2.0 - cwidth, cwidth, 390,
						colors[bcolor]);
				break;
			case TRC: //Right corner top
				Torus2d(x + xcellsize, y + ycellsize, 180, 90,
						(float)xcellsize / 2.0 - cwidth, cwidth, 390,
						colors[bcolor]);
				break;
			case BLC: // Left corner bottom
				Torus2d(x, y, 0, 90, (float)xcellsize / 2.0 - cwidth, cwidth,
						390, colors[bcolor]);
				break;
			case BRC: //Right corner bottom
				Torus2d(x + xcellsize, y, 90, 90,
						(float)xcellsize / 2.0 - cwidth, cwidth, 390,
						colors[bcolor]);
				break;

			case HL: // Horizontal line
				DrawLine(x, y + ycellsize / 2, x + xcellsize, y + ycellsize / 2,
						 lwidth, colors[bcolor]);
				break;
			case VL: // Vertical line
				DrawLine(x + xcellsize / 2, y, x + xcellsize / 2, y + ycellsize,
						 lwidth, colors[bcolor]);
				break;
			case PEBB: // Pebbles

				DrawCircle(x + xcellsize / 2, y + ycellsize / 2, xcellsize / 4,
						   colors[pcolor]);
				break;

			case FRUIT:

				DrawCircle(x + xcellsize / 2, y + ycellsize / 2, xcellsize / 2,
						   colors[rcolor]);
				break;
			}
		}
	}
	//int color=1;
	if (color == 10)
		color = 5;

	DrawRoundRect(75, 75, 150, 110, colors[color], 10.0);
	DrawRoundRect(75, 175, 70, 50, colors[color], 10.0);

	DrawRoundRect(335, 75, 150, 110, colors[color], 10.0);
	DrawRoundRect(415, 175, 70, 50, colors[color], 10.0);

	DrawRoundRect(75, 375, 150, 110, colors[color], 10.0);
	DrawRoundRect(75, 335, 70, 50, colors[color], 10.0);

	DrawRoundRect(335, 375, 150, 110, colors[color], 10.0);
	DrawRoundRect(415, 335, 70, 50, colors[color], 10.0);
}
/*_____________________________________________________________________*/
void Pacman::Draw()
{
	color += 1;

	DrawCircle(a - 12, b - 12, 15, colors[YELLOW]);

	switch (movement)
	{

	case 1:
		DrawCircle(a - 8, b - 5, 4, colors[RED]);
		if (color % 2 == 0)
		{

			DrawCircle(a - 8, b - 5, 2, colors[BLACK]);
			DrawTriangle(a - 12, b - 12, a + 3, b - 4, a + 4, b - 15, colors[BLACK]);
		}

		break;
	case 2:
		DrawCircle(a - 19, b - 5, 4, colors[RED]);
		if (color % 2 == 0)
		{

			DrawCircle(a - 19, b - 5, 2, colors[BLACK]);
			DrawTriangle(a - 12, b - 12, a - 17, b + 3, a - 5, b + 3, colors[BLACK]);
		}

		break;
	case 3:
		DrawCircle(a - 17, b - 5, 4, colors[RED]);
		if (color % 2 == 0)
		{

			DrawCircle(a - 17, b - 5, 2, colors[BLACK]);
			DrawTriangle(a - 12, b - 12, a - 27, b - 5, a - 27, b - 19, colors[BLACK]);
		}

		break;
	case 4:
		DrawCircle(a - 19, b - 18, 4, colors[RED]);
		if (color % 2 == 0)
		{

			DrawCircle(a - 19, b - 18, 2, colors[BLACK]);
			DrawTriangle(a - 12, b - 12, a - 17, b - 27, a - 6, b - 27, colors[BLACK]);
		}

		break;
	};
}

/*__________________________________________________________________*/
//                            GHost Functions
/*__________________________________________________________________*/

Red::Red()
{
	c = 273;
	d = 533;
	color = 5;
}
/*__________________________________________________________________*/
Purple::Purple()
{
	c = 300;
	d = 300;
}
/*__________________________________________________________________*/
Aqua::Aqua()
{
	c = 300;
	d = 300;
}
/*__________________________________________________________________*/
Orange::Orange()
{
	c = 300;
	d = 300;
}
/*__________________________________________________________________*/
void Red::down()
{

	if (Pacman::b < d)
	{

		d -= 20;
	}
	else if (Pacman::b > d)
	{
		d += 20;
	}
	else if (Pacman::a < c)
	{
		c -= 20;
	}
	else if (Pacman::a > c)
	{
		c += 20;
	}
}
/*__________________________________________________________________*/
void Red::Draw()
{

	DrawRoundRect(c + 20, d - 30, 30, 35, colors[RED], 10.0);
	DrawCircle(c + 30, d, 4, colors[BLACK]);
	DrawCircle(c + 40, d, 4, colors[BLACK]);
	DrawLine(c + 20, d - 30, c + 50, d, 3, colors[BLACK]);
	DrawLine(c + 50, d - 30, c + 20, d, 3, colors[BLACK]);
	DrawCircle(c + 30, d, 1, colors[WHITE]);
	DrawCircle(c + 40, d, 1, colors[WHITE]);
	down();
}
/*__________________________________________________________*/
void Purple::Draw()
{
	color += 1;

	DrawRoundRect(c - 20, d - 30, 30, 35, colors[PURPLE], 10.0);
	DrawCircle(c - 10, d, 4, colors[BLACK]);
	DrawCircle(c, d, 4, colors[BLACK]);
	DrawLine(c - 20, d - 30, c + 10, d, 3, colors[BLACK]);
	DrawLine(c + 10, d - 30, c - 20, d, 3, colors[BLACK]);
	DrawCircle(c - 10, d, 1, colors[WHITE]);
	DrawCircle(c, d, 1, colors[WHITE]);
}
/*__________________________________________________________*/

void Orange::Draw()
{
	color += 1;

	DrawRoundRect(c - 60, d - 30, 30, 35, colors[DARK_ORANGE], 10.0);
	DrawCircle(c - 50, d, 4, colors[BLACK]);
	DrawCircle(c - 40, d, 4, colors[BLACK]);
	DrawLine(c - 60, d - 30, c - 30, d, 3, colors[BLACK]);
	DrawLine(c - 30, d - 30, c - 60, d, 3, colors[BLACK]);
	DrawCircle(c - 50, d, 1, colors[WHITE]);
	DrawCircle(c - 40, d, 1, colors[WHITE]);
}
/*__________________________________________________________*/
void Aqua::Draw()
{
	color += 1;

	DrawRoundRect(c - 100, d - 30, 30, 35, colors[AQUA], 10.0);
	DrawCircle(c - 90, d, 4, colors[BLACK]);
	DrawCircle(c - 80, d, 4, colors[BLACK]);
	DrawLine(c - 100, d - 30, c - 70, d, 3, colors[BLACK]);
	DrawLine(c - 70, d - 30, c - 100, d, 3, colors[BLACK]);
	DrawCircle(c - 90, d, 1, colors[WHITE]);
	DrawCircle(c - 80, d, 1, colors[WHITE]);
} /*__________________________________________________________*/
