#include "L12_Animation.h"

L12_Animation::L12_Animation()
{
}

void L12_Animation::draw()
{
	background();
	drawRotate();
}

void L12_Animation::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L12_Animation::drawRotate()
{
	double a;
	a = 30 * seconds(); // FUNCION PARA ANIMAR UNA ROTACION
	glPushMatrix();
	glRotated(a, 0, 0, 1);
	drawTriangle();
	glPopMatrix();
}

void L12_Animation::drawTriangle()
{
	glColor3d(1.0, 0, 0.8);

	glBegin(GL_TRIANGLES);
	glVertex3d(0, 0, 0);
	glVertex3d(-10, -10, 0);
	glVertex3d(10, -10, 0);

	glEnd();
}
