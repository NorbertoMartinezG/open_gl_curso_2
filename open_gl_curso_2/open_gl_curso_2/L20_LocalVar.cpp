#include "L20_LocalVar.h"

L20_LocalVar::L20_LocalVar()
{
}

void L20_LocalVar::draw()
{
	background();
	drawSquare();
}

void L20_LocalVar::background()
{
}

void L20_LocalVar::drawSquare()
{
	double l, s; // local var
	l = 3;		// longitud
	s = l / 2.0; // semilongitud

	glBegin(GL_LINES);
		glVertex3d(-s, s, 0); glVertex3d(-s, -s, 0);
		glVertex3d(-s, -s, 0); glVertex3d(s, -s, 0);
		glVertex3d(s, -s, 0); glVertex3d(s, s, 0);
		glVertex3d(s, s, 0); glVertex3d(-s, s, 0);
	glEnd();


}
