#include "L28_Translate.h"

L28_Translate::L28_Translate()
{
}

void L28_Translate::draw()
{
	background();
	camera();
	//drawPyramids();
	drawAnimation();
}

void L28_Translate::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L28_Translate::camera()
{
	glRotated(30, 1, 0, 0);
}

void L28_Translate::drawAnimation()
{
	double a;
	a = 30 * seconds();

	glPushMatrix();
	glRotated(a, 0, 1, 0);
	drawPyramids();
	glPopMatrix();
}

void L28_Translate::drawPyramids()
{
	glPushMatrix();
	glTranslated(-12, 0, 0);
	drawPyramid();
	glPopMatrix();

	glPushMatrix();
	glTranslated( 0, 0, 0);
	drawPyramid();
	glPopMatrix();

	glPushMatrix();
	glTranslated( 12, 0, 0);
	drawPyramid();
	glPopMatrix();
}

void L28_Translate::drawPyramid()
{
	int i;
	i = 0;
	while (i<4)
	{
		glColor3d(0.0, 0.1 * i + 0.2, 0.6);
		glPushMatrix();
		glRotated(90 * i, 0, 1, 0);
		drawTriangle();
		glPopMatrix();
		i++;
	}
}

void L28_Translate::drawTriangle()
{
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 5, 0);
	glVertex3d(0, 0, 5);
	glVertex3d(5, 0, 0);
	glEnd();
}
