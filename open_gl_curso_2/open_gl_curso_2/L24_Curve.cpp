#include "L24_Curve.h"

L24_Curve::L24_Curve()
{
	count = 4;
}

void L24_Curve::draw()
{
	background();
	drawPolygon();
}

void L24_Curve::click()
{
	count = count * 2;

	if (count > 64)
	{
		count = 4;
	}
}

void L24_Curve::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L24_Curve::drawPolygon()
{
	int i;
	double x, y, a;

	glLineWidth(2);
	glColor3d(0.6, 0.6, 1.0);

	a = 360.0 / count;				//angulo de rotacion de las lineas del poligono
	y = 12 * sin(3.1415 / count);
	x = 12 * cos(3.1415 / count);

	i = 0;
	while (i < count)
	{
		glPushMatrix();
			glRotated(a * i, 0, 0, 1);
			glBegin(GL_LINES);
				glVertex3d(x, y, 0);
				glVertex3d(x, -y, 0);
			glEnd();
		glPopMatrix();

		i = i + 1;

	}


}
