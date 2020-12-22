#include "L13_Square.h"

L13_Square::L13_Square()
{
	a = 0;
}

void L13_Square::draw()
{
	background();
	drawRotate();
	drawSquare();
}

void L13_Square::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L13_Square::drawSquare() // dibuja cuatro triandulos cada uno con diferente rotacion para formar un cuandro entre los 4
{
	a = 0;
	drawRotate();

	a = 90;
	drawRotate();

	a = 180;
	drawRotate();

	a = 270;
	drawRotate();
}

void L13_Square::drawRotate()
{
	
	glPushMatrix();
	glRotated(a, 0, 0, 1);
	drawTriangle();
	glPopMatrix();
}

void L13_Square::drawTriangle()
{
	glColor3d(1.0, 0, 0.8);

	glBegin(GL_TRIANGLES);
	glVertex3d(0, 0, 0);
	glVertex3d(-10, -10, 0);
	glVertex3d(10, -10, 0);

	glEnd();
}
