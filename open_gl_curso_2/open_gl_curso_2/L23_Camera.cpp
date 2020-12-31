#include "L23_Camera.h"

L23_Camera::L23_Camera()
{
	anguloCam = 0;
	anguloCubo = 0;
}

void L23_Camera::draw()
{
	background();
	//drawCube();
	camera();
	drawAnimation();
	
}

void L23_Camera::click()
{
	anguloCam = anguloCam + 2;
	if (anguloCam > 60)
	{
		anguloCam = 60;
	}
}

void L23_Camera::background()
{
	glClearColor(0, 0, 0.2, 1);
	
}

void L23_Camera::camera()
{
	glRotated(anguloCam, 1, 0, 0);
	
}

void L23_Camera::drawAnimation()
{
	double a;
	a = 30 * seconds();

	glPushMatrix();
	glRotated(a, 0, 1, 0);
	drawCube();
	glPopMatrix();
}

void L23_Camera::drawCube()
{
	glLineWidth(2);
	glColor3d(0.6, 0.6, 1.0);

	anguloCubo = 0;
	while (anguloCubo < 360)
	{
		drawRotate();
		anguloCubo = anguloCubo + 90;
	}
}

void L23_Camera::drawRotate()
{
	glPushMatrix();
	glRotated(anguloCubo, 0, 1, 0);
	drawSquare();
	glPopMatrix();
}

void L23_Camera::drawSquare()
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
