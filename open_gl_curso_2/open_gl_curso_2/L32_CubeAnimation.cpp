#include "L32_CubeAnimation.h"

L32_CubeAnimation::L32_CubeAnimation()
{
	Z = 16;
}

void L32_CubeAnimation::draw()
{
	background();
	camera();
	//drawSquare();
	//drawCube();
	drawAnimation();
}

void L32_CubeAnimation::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L32_CubeAnimation::camera()
{
	double cam;
	cam = 45 * seconds();
	glRotated(30, 1, 0, 0);
	glRotated(cam, 0, 1, 0); // rotacion al rededor de y
	glRotated(cam, 0, 0, 1); // rotacion al rededor de z

}

void L32_CubeAnimation::drawAnimation()
{
	Z = 16 - 1 * seconds();
	if (Z < 6)
	{
		Z = 6;
	}
	drawCube();
}

void L32_CubeAnimation::drawCube()
{
	int i;
	i = 0;
	while (i < 4)
	{
		glColor3d(0.6 - 0.1 * i, 0.0, 0.1 * i);
		glPushMatrix();
		glRotated(90.0 * i, 0, 1, 0);
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


void L32_CubeAnimation::drawSquare()
{
	double l, s;
	l = 12;
	s = l / 2.0;
	

	glBegin(GL_TRIANGLES);
	glVertex3d(-s, s, Z);
	glVertex3d(-s, -s, Z);
	glVertex3d(s, -s, Z);

	glVertex3d(s, -s, Z);
	glVertex3d(s, s, Z);
	glVertex3d(-s, s, Z);
	glEnd();
}
