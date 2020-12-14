#include "L07_Triangle.h"

L07_Triangle::L07_Triangle()
{
}

void L07_Triangle::draw()
{
	glClearColor(0, 0, 0.2, 1); // color fondo

	glBegin(GL_TRIANGLES); // triangulo tomando como punto 0 , 0 ,0 el centro de la pantalla
	{
		/*glVertex3d(0, 10, 0);
		glVertex3d(-10, -10, 0);
		glVertex3d(0, -10, 0);*/

		/*glVertex3d(0, 10, 0);
		glVertex3d(0, -10, 0);
		glVertex3d(-10, -10, 0);*/

		glVertex3d(0, 10, 0);
		glVertex3d(-10, -10, 0);
		glVertex3d(10, -10, 0);

	}

	glEnd();


}
