#include "L30_Scale.h"

L30_Scale::L30_Scale()
{
}

void L30_Scale::draw()
{
	background();
	camera();
	drawPyramids();
}

void L30_Scale::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L30_Scale::camera()
{
	glRotated(15, 1, 0, 0);
}

void L30_Scale::drawPyramids()
{
	double a;
	a = 60 * seconds();


	glPushMatrix();
	glTranslated(-12, 0, 0);
	glRotated(a, 0, 1, 0);
	glScaled(1, 2, 1);
	drawPyramid();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 0);
	glRotated(a, 0, 1, 0);
	glScaled(1, 1, 1);
	drawPyramid();
	glPopMatrix();

	glPushMatrix();
	glTranslated(12, 0, 0);
	glRotated(a, 0, 1, 0);
	glScaled(1, 0.5, 1);
	drawPyramid();
	glPopMatrix();
	
}

void L30_Scale::drawPyramid()
{
	int i;
	i = 0;
	while (i < 4)
	{
		glColor3d(0.6, 0.0, 0.2 * i + 0.2);
		glPushMatrix();
		glRotated(90.0 * i, 0, 1, 0);
		drawTriangle();
		glPopMatrix();
		i++;
	}
}

void L30_Scale::drawTriangle()
{
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 5, 0);
	glVertex3d(0, 0, 5);
	glVertex3d(5, 0, 0);
	glEnd();
}
