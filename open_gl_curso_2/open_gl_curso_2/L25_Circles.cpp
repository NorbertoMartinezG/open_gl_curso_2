#include "L25_Circles.h"

L25_Circles::L25_Circles()
{
	count = 1;
}

void L25_Circles::draw()
{
	background();
	//drawCircle();
	//drawCircles();
	drawAnimation();
}

void L25_Circles::click()
{
	count++;

	if (count > 36) // numero maximo de circulos
	{
		count = 1;
	}

}

void L25_Circles::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L25_Circles::camera()
{
	glRotated(30, 1, 0, 0);
}

void L25_Circles::drawAnimation()
{
	double ang;
	ang = 30 * seconds(); //velocidad de rotacion
	glPushMatrix();
	glRotated(ang, 0, 1, 0);
	drawCircles();
	glPopMatrix();
	
}

void L25_Circles::drawCircles()
{
	double a;
	int i;
	glLineWidth(4);
	glColor3d(0.0,0.3,0.6);

	i = 0;
	while (i < count)
	{
		glPushMatrix();
		glRotated(5.0 * i, 0, 1, 0); // separacion entre circulos
		drawCircle();
		glPopMatrix();
		i++;
	}
}

void L25_Circles::drawCircle()
{
	int i;
	double x, y, a;

	a = 6; // angulo de rotacion 
	y = 12 * sin(3 * 3.1415 / 180.0);
	x = 12 * cos(3 * 3.1415 / 180.0);

	i = 0;
	while (i < 60)
	{
		glPushMatrix();
		glRotated(a * i, 0, 0, 1);
		glBegin(GL_LINES);
		glVertex3d(x, y, 0);
		glVertex3d(x, -y, 0);
		glEnd();
		glPopMatrix();

		i++;


	}
}
