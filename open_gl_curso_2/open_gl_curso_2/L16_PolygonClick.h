#pragma once
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L16_PolygonClick : public Scene
{
public:

	L16_PolygonClick();

	void draw();

	void click();

private:
	double count; // numero de triangulos
	int a;		// angulo de rotacion de cada triangulo
	double b; // color cambiante

	void background();

	void drawPolygon();

	void drawRotate();

	void drawTriangle();

};

