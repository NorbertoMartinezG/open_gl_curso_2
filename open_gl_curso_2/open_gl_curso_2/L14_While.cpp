#include "L14_While.h"

L14_While::L14_While()
{
}

void L14_While::draw()
{
	background();
	drawSquare();
}

void L14_While::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L14_While::drawSquare()
{
	a = 0;
	b = 0;
	while (a<360)
	{
		b = b + 0.03;
		drawRotate();
		a = a + 9;
		
	}
}

void L14_While::drawRotate()
{
	glPushMatrix();
	glRotated(a, 0, 0, 1); 
	//glColor3d(b, b, 0.6); // se puede declarar aqui el color o en la funcion draw.
	drawTriangle();
	glPopMatrix();
}

void L14_While::drawTriangle()
{
	
	glColor3d(b, b, 0.6);
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 0, 0);
	glVertex3d(-10, -10, 0);
	glVertex3d(10, -10, 0);
	glEnd();
	
}
