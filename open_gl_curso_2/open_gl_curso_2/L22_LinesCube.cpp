#include "L22_LinesCube.h"


L22_LinesCube::L22_LinesCube()
{
	count = 1;
}

void L22_LinesCube::draw()
{
	background();
	drawCube();
}

void L22_LinesCube::click()
{
	count++;
	cout << "hola que hace" << endl;
	if (count > 4)
	{
		count = 1;
	}
}

void L22_LinesCube::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L22_LinesCube::drawCube()
{
	glLineWidth(2);
	glColor3d(0.6, 0.6, 1.0);

	int i = 0;
	while (i < count)
	{
		a = 90.0 * i;
		drawRotate();
		i++;
	}
}

void L22_LinesCube::drawRotate()
{
	glPushMatrix();
	glRotated(a, 0, 1, 0); //gira alrededor del eje Y. (numero uno entre los parentesis)
	drawSquare();
	glPopMatrix();
}

void L22_LinesCube::drawSquare()
{
	double l, s;
	l = 16;
	s = l / 2.0;

	glBegin(GL_LINES);
	glVertex3d(-s, s, s); glVertex3d(-s, -s, s);
	glVertex3d(-s, -s, s); glVertex3d(s, -s, s);
	glVertex3d(s, -s, s); glVertex3d(s, s, s);
	glVertex3d(s, s, s); glVertex3d(-s, s, s);
	glEnd();


}
