#include "L15_Polygon.h"

L15_Polygon::L15_Polygon()
{
	a = 0;
	b = 0;
}

void L15_Polygon::draw()
{
	background();
	//drawRotate();
	drawPolygon();
}

void L15_Polygon::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L15_Polygon::drawPolygon()
{
	a = 0;
	b = 0;
	while (a < 360)
	{
		b = b + 0.1; // va cambiando el color
		drawRotate(); // dibuja un triangulo rotado segun el valor de a
		a = a + 60; // 8 triangulos dibujados de diferente color.
	}

}

void L15_Polygon::drawRotate()
{
	glPushMatrix();
	glRotated(a, 0, 0, 1);
	//glColor3d(b, b, 0.6); // se puede declarar aqui el color o en la funcion draw.
	drawTriangle();
	glPopMatrix();
}

void L15_Polygon::drawTriangle()
{
	glColor3d(b, b, 0.6);
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 0, 0);
	glVertex3d(-5, -12, 0);
	glVertex3d(5, -12, 0);
	glEnd();
}
