#include "L27_LoopCounter.h"

L27_LoopCounter::L27_LoopCounter()
{
}

void L27_LoopCounter::draw()
{
	background();
	camera();
	drawAnimation();
}

void L27_LoopCounter::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L27_LoopCounter::camera()
{
	glRotated(20, 1, 0, 0);
}

void L27_LoopCounter::drawAnimation()
{
	double a;
	a = 30 * seconds();

	glPushMatrix();
	glRotated(a, 0, 1, 0);
	drawPyramid();
	glPopMatrix();
}

void L27_LoopCounter::drawPyramid()
{
	int i;
	i = 0;
	while (i<4)
	{
		glColor3d(0.6, 0.0, 0.2 * i + 0.2);

		glPushMatrix();
		glRotated(90.0*i, 0, 1, 0);
		drawTriangle();
		glPopMatrix();

		i++;

	
	}
}

void L27_LoopCounter::drawTriangle()
{
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 7, 0);
	glVertex3d(0, -7, 14);
	glVertex3d(14, -7, 0);
	glEnd();
}
