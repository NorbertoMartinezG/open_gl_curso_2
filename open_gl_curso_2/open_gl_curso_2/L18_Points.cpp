#include "L18_Points.h"

L18_Points::L18_Points()
{
	a = 0;
	b = 0.2;
}

void L18_Points::draw()
{
	background();
	//drawPoint();
	drawPoints();
}

void L18_Points::background()
{
	glClearColor(0, 0, 0.2, 1);

}

void L18_Points::drawPoints()
{
	a = 0;
	b = 0;
	while (a < 360) // para ir rotando la matriz que contiene al punto
	{
		b = b + 0.03;
		drawRotate();
		a = a + 15; // espacio entre puntos
	}
}

void L18_Points::drawRotate()
{
	glPushMatrix();
	glRotated(a, 0, 0, 1);
	drawPoint();
	glPopMatrix();
}

void L18_Points::drawPoint()
{
	glColor3d(b, b, 0.2);
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glVertex3d(10, 0, 0);
	glEnd();
	
}
