#include "L17_PolygonAnimation.h"

L17_PolygonAnimation::L17_PolygonAnimation()
{
	a = 0;
	b = 0;
}

void L17_PolygonAnimation::draw()
{
	background();
	drawPolygon();
}

void L17_PolygonAnimation::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L17_PolygonAnimation::drawPolygon()
{
	int count;
	int i;

	count = int(seconds());

	if (count > 8)
	{
		count = 8;
	}

	i = 0;
	b = 0;
	while (i < count)
	{
		b = b + 0.1;
		a = 45.0 * i;
		drawRotate();
		i++;
	}

}

void L17_PolygonAnimation::drawRotate()
{
	glPushMatrix();
	glRotated(a, 0, 0, 1);
	drawTriangle();
	glPopMatrix();
}

void L17_PolygonAnimation::drawTriangle()
{
	glColor3d(b, b, 0.2);
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 0, 0);
	glVertex3d(-5, -12, 0);
	glVertex3d(5, -12, 0);
	glEnd();
}
