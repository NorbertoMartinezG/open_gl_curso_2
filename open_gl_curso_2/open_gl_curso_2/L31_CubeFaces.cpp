#include "L31_CubeFaces.h"

L31_CubeFaces::L31_CubeFaces()
{
}

void L31_CubeFaces::draw()
{
	background();
	camera();
	//drawSquare();
	drawCube();
}

void L31_CubeFaces::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L31_CubeFaces::camera()
{
	double cam;
	cam = 40 * seconds();
	glRotated(cam, 0, 1, 0);
}

void L31_CubeFaces::drawCube()
{
	int i;
	i = 0;
	while (i < 4)
	{
		glColor3d(0.6 - 0.1 * i, 0.0, 0.2 * i);
		glPushMatrix();
		glRotated(90 * i, 0, 1, 0);
		drawSquare();
		glPopMatrix();
		i++;


	}

	glColor3d(0.0, 0.4, 0.8);
	glPushMatrix();
	glRotated(-90, 1, 0, 0);
	drawSquare();
	glPopMatrix();

	glColor3d(0.0, 0.4, 0.4);
	glPushMatrix();
	glRotated(90, 1, 0, 0);
	drawSquare();
	glPopMatrix();


}

void L31_CubeFaces::drawSquare()
{
	double l, s, z;
	l = 12;
	s = l / 2.0;
	z = 12;

	glBegin(GL_TRIANGLES);
	glVertex3d(-s, s, z);
	glVertex3d(-s, -s, z);
	glVertex3d(s, -s, z);

	glVertex3d(s, -s, z);
	glVertex3d(s, s, z);
	glVertex3d(-s, s, z);
	glEnd();
}
