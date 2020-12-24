#pragma once
//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L17_PolygonAnimation : public Scene
{

public:

	L17_PolygonAnimation();

	void draw();

private:

	double a; // angulo de rotacion
	double b;  // variacion de color

	void background();

	void drawPolygon();

	void drawRotate();

	void drawTriangle();

};