#include "L09_Color.h"

L09_Color::L09_Color()
{
}

void L09_Color::draw()
{
	background();
	//drawTriangle();
	drawTriangles();
}

void L09_Color::background()
{
	glClearColor(0, 0, 0.2, 1);
}

void L09_Color::drawTriangle()
{
	glColor3d(0.8, 0, 0.8); // color del triangulo
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 10, 0);
	glVertex3d(-10, -10, 0);
	glVertex3d(0, -10, 0);
	glEnd();
}

void L09_Color::drawTriangles()
{
	
	
	glBegin(GL_TRIANGLES);// se dibujan puntos independientes a partir de los cuales se dibujan los triangulos
	
	glColor3d(0.8, 0, 0.8); // color del triangulo
	glVertex3d(0, 10, 0);
	glVertex3d(-10, -10, 0);
	glVertex3d(0, -10, 0);
	
	glColor3d(0.0, 1.0, 0.2); // color del triangulo
	glVertex3d(0, 10, 0);
	glVertex3d(10, -10, 0);
	glVertex3d(0, -10, 0);
	glEnd();
}
