#include "L26_Pyramid.h"

L26_Pyramid::L26_Pyramid()
{
}

void L26_Pyramid::draw()
{
	background();
	camera();
	drawAnimation();
}

void L26_Pyramid::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L26_Pyramid::camera()
{
	glRotated(20, 1, 0, 0);
}

void L26_Pyramid::drawAnimation()
{
	double a;
	a = 30 * seconds();

	glPushMatrix();
	glRotated(a, 0, 1, 0);
	drawPyramid();
	glPopMatrix();
}

void L26_Pyramid::drawPyramid()
{
	double a;
	double c;

	//glColor3d(0.8, 0.0, 0.2); // un solo color para la piramide

	a = 0;
	c = 0.2;
	while (a < 360) // caras de la piramide cada 90 grados
	{
		glColor3d(0.6, 0.0, c); // color distinto para cada cara
		glPushMatrix();
		glRotated(a, 0, 1, 0);
		drawTriangle();
		glPopMatrix();

		a = a + 90;
		c = c + 0.2;
	}
}

void L26_Pyramid::drawTriangle()
{
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 6, 0);
	glVertex3d(-10, -6, 10);
	glVertex3d(10, -6, 10);
	glEnd(); 

}
