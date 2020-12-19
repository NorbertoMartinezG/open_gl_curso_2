#include "L10_Rotate.h"

L10_Rotate::L10_Rotate()
{
}

void L10_Rotate::draw()
{
	background();
	drawRotate();
	//drawTriangle();
	
}

void L10_Rotate::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L10_Rotate::drawRotate()
{
	glPushMatrix();
	glRotated(180, 0, 0, 1); // rota 90 grados en el eje z(1)
	drawTriangle(); // aqui se dibuja el triangulo dentro de la matriz rotada
	glPopMatrix();

}

void L10_Rotate::drawTriangle()
{
	glColor3d(1.0, 0, 0.8);

	glBegin(GL_TRIANGLES);
	glVertex3d(0,0,0);
	glVertex3d(-10, -10, 0);
	glVertex3d(10, -10, 0);
	
	glEnd();
}
