#include "L16_PolygonClick.h"

L16_PolygonClick::L16_PolygonClick()
{
	count = 1;
	b = 0;
	a = 0;
}

void L16_PolygonClick::draw()
{
	background();
	drawPolygon();
}

void L16_PolygonClick::click()
{
	count++;

	if (count > 8)
	{
		count = 1;
	}
}

void L16_PolygonClick::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L16_PolygonClick::drawPolygon()
{
	int i = 0;
	b = 0;
	while (i < count)
	{
		b = b + 0.1;
		a = 45.0 * i;
		drawRotate();
		i++;
	}
}

void L16_PolygonClick::drawRotate()
{
	glPushMatrix();
	glRotated(a, 0, 0, 1);
	drawTriangle();
	glPopMatrix();

}

void L16_PolygonClick::drawTriangle()
{
	glColor3d(b, b, 0.2);
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 0, 0);
	glVertex3d(-5, -12, 0);
	glVertex3d(5, -12, 0);
	glEnd();
}
