#pragma once
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <GL/glut.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L15_Polygon : public Scene
{


public:

	L15_Polygon();

	void draw();

private:
	double a;
	double b;

	void background();

	void drawPolygon();

	void drawRotate();

	void drawTriangle();

};