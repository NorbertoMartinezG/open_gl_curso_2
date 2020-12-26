#include "L19_Lines.h"

L19_Lines::L19_Lines()
{
}

void L19_Lines::draw()
{
	background();
	drawSquare();
}

void L19_Lines::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L19_Lines::drawSquare()
{
	glColor3d(0, 1, 0.2); // color de la linea
	glLineWidth(4); // ancho de la linea

	glBegin(GL_LINES); // las lineas se definen con dos puntos a partir de un punto (0,0)
	glVertex3d(-8, 8, 0); glVertex3d(-8, -8, 0);
	glVertex3d(-8, -8, 0); glVertex3d(8, -8, 0);
	glVertex3d(8, -8, 0); glVertex3d(8, 8, 0);
	glVertex3d(8, 8, 0); glVertex3d(-8, 8, 0);
	glEnd();


}
