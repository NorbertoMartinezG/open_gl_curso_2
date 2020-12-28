#include "L21_PointsAnimation.h"

L21_PointsAnimation::L21_PointsAnimation()
{
	a = 0;
}

void L21_PointsAnimation::draw()
{
	background();
	//drawPoints();
	drawAnimation();
}

void L21_PointsAnimation::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L21_PointsAnimation::drawAnimation()
{
	double a;
	a = 30 * seconds(); // velocidad de rotacion
	glPushMatrix();
	//glRotatef(a, 1, 0, 0); // rota en en el eje x
	glRotatef(a, 0, 1, 0); // rota en en el eje y
	//glRotatef(a, 0, 0, 1); // // rota en en el eje z
	drawPoints();
	glPopMatrix();
}

void L21_PointsAnimation::drawPoints()
{
	glPointSize(4);

	a = 0;
	while (a < 360)
	{
		drawRotate();
		a = a + 15;
	}
}

void L21_PointsAnimation::drawRotate()
{
	glPushMatrix();
	glRotated(a, 0, 0, 1);
	drawPoint();
	glPopMatrix();
}

void L21_PointsAnimation::drawPoint()
{
	glBegin(GL_POINTS);
	glVertex3d(10, 0, 0);
	glEnd();
}
