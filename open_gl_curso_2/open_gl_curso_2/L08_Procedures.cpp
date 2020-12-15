#include "L08_Procedures.h"

L08_Procedures::L08_Procedures()
{
}

void L08_Procedures::draw()
{
	background();
	drawTriangle();
}

void L08_Procedures::background()
{
	glClearColor(0, 0, 0.2, 1);

}

void L08_Procedures::drawTriangle()
{
	glBegin(GL_TRIANGLES);
	glVertex3d(0, 10, 0);
	glVertex3d(-10, -10, 0);
	glVertex3d(10, -10, 0);
	glEnd();

}
