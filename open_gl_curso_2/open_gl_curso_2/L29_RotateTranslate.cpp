#include "L29_RotateTranslate.h"

L29_RotateTranslate::L29_RotateTranslate()
{
}

void L29_RotateTranslate::draw()
{
	background();
	camera();
	drawPyramids();
}

void L29_RotateTranslate::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L29_RotateTranslate::camera()
{
	glRotated(20, 1, 0, 0);
}

void L29_RotateTranslate::drawPyramids()
{
	double a;
	a = 60 * seconds();
	glPushMatrix();
	glTranslated(-12, 0, 0);
	glRotated(a, 0, 1, 0);
	drawPyramid();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 0);
	glRotated(a, 0, 1, 0);
	drawPyramid();
	glPopMatrix();

	glPushMatrix();
	glTranslated(12, 0, 0);
	glRotated(a, 0, 1, 0);
	drawPyramid();
	glPopMatrix();

}

void L29_RotateTranslate::drawPyramid()
{
	int i;
	i = 0;
	while (i < 4)
	{
		glColor3d(0.6, 0.0, 0.2 * i + 0.2);
		glPushMatrix();
		glRotated(90 * i, 0, 1, 0);
		drawTriangle();
		glPopMatrix();
		i++;
	}
}

void L29_RotateTranslate::drawTriangle()
{
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 5, 0);
	glVertex3d(0, 0, 5);
	glVertex3d(5, 0, 0);
	glEnd();
}
