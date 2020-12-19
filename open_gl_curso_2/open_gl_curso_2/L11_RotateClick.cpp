#include "L11_RotateClick.h"

L11_RotateClick::L11_RotateClick()
{
	a = 0; // 0 grados
}

void L11_RotateClick::draw()
{

	background();
	drawRotate();
	//drawTriangle();

}

void L11_RotateClick::click()
{
	a = a + 90;

	if (a >= 360)
	{
		a = 0;
	}
}

void L11_RotateClick::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L11_RotateClick::drawRotate()
{
	glPushMatrix();
	glRotated(a,0,0,1);
	drawTriangle();
	glPopMatrix();

}

void L11_RotateClick::drawTriangle()
{
	glColor3d(1.0, 0, 0.8);

	glBegin(GL_TRIANGLES);
	glVertex3d(0, 0, 0);
	glVertex3d(-10, -10, 0);
	glVertex3d(10, -10, 0);

	glEnd();
}
